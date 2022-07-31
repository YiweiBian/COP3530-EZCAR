//
// Created by Patrick Zhao on 7/27/22.
//

#include "heap.h"
#include <string>
using namespace std;

void min_heap::heapifyDown(int index) {
    int left_child = 2 * index + 1;
    int right_child = 2 * index + 2;
    int smallest = index;
    int size = heap.size();
    //compare the node with its left and right child
    if(right_child < size && heap[smallest].msrp > heap[right_child].msrp)
        smallest = right_child;
    if(left_child < size && heap[smallest].msrp > heap[left_child].msrp){
        smallest = left_child;
    }
    // the swap has occured
    if(smallest != index){
        //swap with the larger one
        Vehicle temp = heap[index];
        heap[index] = heap[smallest];
        heap[smallest] = temp;
        heapifyDown(smallest);
    }
}

void min_heap::heapifyUp(int index) {
    int parent = (index -1) / 2;
    if(parent >=0 && heap[parent].msrp > heap[index].msrp){
        Vehicle temp = heap[index];
        heap[index] = heap[parent];
        heap[parent] = temp;
        heapifyUp(parent);
    }
}

void min_heap::insert(Vehicle target) {
    heap.push_back(target);
    heapifyUp(heap.size()-1);
}

void min_heap:: deleteMin(){
     if(heap.size() == 0)
         return;
     //set the last one to the first, then heapifydown
     heap[0] = heap[heap.size()-1];
     heap.pop_back();
     heapifyDown(0);
}

Vehicle min_heap::extractMin() {
    return heap[0];
}
vector<Vehicle> max_heap::print() {
    int size = heap.size();
    vector<Vehicle> final_list;
    if(size == 0){
        cout << "No results have been found!" << endl;
    }
    else{
        for(unsigned int i = 0; i < size; i++){
            cout << i << ". " << "$" << extractMax().msrp <<" "<< extractMax().model << endl;
            final_list.push_back(extractMax());
            deleteMax();
        }
    }
    return final_list;
}
//
//
//max_heap
void max_heap::heapifyDown(int index) {
    int left_child = 2 * index + 1;
    int right_child = 2 * index + 2;
    int largest = index;
    int size = heap.size();
    //compare the node with its left and right child
    if(right_child < size && heap[largest].msrp < heap[right_child].msrp)
        largest = right_child;
    if(left_child < size && heap[largest].msrp < heap[left_child].msrp){
        largest = left_child;
    }
    // the swap has occured
    if(largest != index){
        //swap with the larger one
        Vehicle temp = heap[index];
        heap[index] = heap[largest];
        heap[largest] = temp;
        heapifyDown(largest);
    }
}

void max_heap::heapifyUp(int index) {
    int parent = (index -1) / 2;
    if(parent >=0 && heap[parent].msrp < heap[index].msrp){
        Vehicle temp = heap[index];
        heap[index] = heap[parent];
        heap[parent] = temp;
        heapifyUp(parent);
    }
}

void max_heap::insert(Vehicle target) {
    heap.push_back(target);
    heapifyUp(heap.size()-1);
}

void max_heap:: deleteMax(){
    if(heap.size() == 0)
        return;
    //set the last one to the first, then heapifydown
    heap[0] = heap[heap.size()-1];
    heap.pop_back();
    heapifyDown(0);
}

Vehicle max_heap::extractMax() {
    return heap[0];
}

max_heap max_heap::typeSelection(std::string type) {
    max_heap result;
    for(unsigned int i = 0; i < heap.size(); i++){
        if(heap[i].category == type){
            result.insert(heap[i]);
        }
    }
    return result;
}

max_heap max_heap::budgetSelection(int budget) {
    max_heap result;
    for(unsigned int i = 0; i < heap.size(); i++){
        if(heap[i].msrp < budget){
            result.insert(heap[i]);
        }
    }
    return result;
}

max_heap max_heap::yearSelection(int max, int min) {
    max_heap result;
    for(unsigned int i = 0; i < heap.size(); i++){
        if(heap[i].year > min && heap[i].year < max){
            result.insert(heap[i]);
        }
    }
    return result;
}

max_heap max_heap::brandSelection(std::string brand) {
    max_heap result;
    for(unsigned int i = 0; i < heap.size(); i++){
        if(heap[i].manufacturer == brand){
            result.insert(heap[i]);
        }
    }
    return result;
}

max_heap max_heap::transmissionSelection(std::string transmission) {
    max_heap result;
    for(unsigned int i = 0; i < heap.size(); i++){
        if(heap[i].transmission == transmission){
            result.insert(heap[i]);
        }
    }
    return result;
}

max_heap max_heap::fuelSelection(int selection) {
    max_heap result;
    if(selection == 1){
        for(unsigned int i = 0; i < heap.size(); i++){
            if(heap[i].fuelSystem == "Electric"){
                result.insert(heap[i]);
            }
        }
    }
    if(selection == 2){
        for(unsigned int i = 0; i < heap.size(); i++){
            if(heap[i].fuelSystem != "Electric"){
                result.insert(heap[i]);
            }
        }
    }
    return result;
}

max_heap max_heap::purposeSelection(float max, float min) {
    max_heap result;
    for(unsigned int i = 0; i < heap.size(); i++){
        if(heap[i].displacement < max && heap[i].displacement > min){
            result.insert(heap[i]);
        }
    }
    return result;
}

max_heap max_heap::seatsSelection(int minSeats, int maxSeats) {
    max_heap result;
    for(unsigned int i = 0; i < heap.size(); i++){
        if(heap[i].passengerCapacity < maxSeats && heap[i].passengerCapacity > minSeats){
            result.insert(heap[i]);
        }
    }
    return result;
}

max_heap max_heap::riskSelection() {
    max_heap result;
    for (unsigned int i = 0; i < heap.size(); i++) {
        if (heap[i].tractionControl && heap[i].stabilityControl){
                result.insert(heap[i]);
        }
    }
    return result;
}

max_heap max_heap::airbagSelection() {
    max_heap result;
    for (unsigned int i = 0; i < heap.size(); i++) {
        if (heap[i].airbags == 5 && heap[i].rolloverProtect){
            result.insert(heap[i]);
        }
    }
    return result;
}

max_heap max_heap::childSelection() {
    max_heap result;
    for (unsigned int i = 0; i < heap.size(); i++) {
        if (heap[i].childSafety){
            result.insert(heap[i]);
        }
    }
    return result;
}

max_heap max_heap::cameraSelection() {
    max_heap result;
    for (unsigned int i = 0; i < heap.size(); i++) {
        if (heap[i].backCamera){
            result.insert(heap[i]);
        }
    }
    return result;
}

max_heap max_heap::assistanceSelection() {
    max_heap result;
    for (unsigned int i = 0; i < heap.size(); i++) {
        if (heap[i].parkingAid){
            result.insert(heap[i]);
        }
    }
    return result;
}

max_heap max_heap::lightSelection() {
    max_heap result;
    for (unsigned int i = 0; i < heap.size(); i++) {
        if (heap[i].daytimeLights){
            result.insert(heap[i]);
        }
    }
    return result;
}

min_heap max_heap::reverse() {
    min_heap result;
    for(unsigned int i = 0; i < heap.size(); i++){
        result.insert(heap[i]);
    }
    return result;
}


vector<Vehicle> min_heap::print() {
    int size = heap.size();
    vector<Vehicle> final_list;
    if(size == 0){
        cout << "No results have been found!" << endl;
    }
    else{
        for(unsigned int i = 0; i < size; i++){
            cout << i << ". " << "$" << extractMin().msrp <<" "<< extractMin().model << endl;
            final_list.push_back(extractMin());
            deleteMin();
        }
    }
    return final_list;
}


