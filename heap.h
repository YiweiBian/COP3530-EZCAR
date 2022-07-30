//
// Created by Patrick Zhao on 7/27/22.
//

#ifndef CAR_SELECTION_HEAP_H
#define CAR_SELECTION_HEAP_H

#include <iostream>
#include <string>
#include <vector>
#include "Vehicle.h"
using namespace std;


class min_heap{
private:
    vector<Vehicle> heap;
    int parent;
    int left_child;
    int right_child;
    void heapifyUp(int index);
    void heapifyDown(int index);
public:
    min_heap(){};
    void insert(Vehicle target);
    void deleteMin();
    Vehicle extractMin();
    void print();
};

class max_heap{
private:
    vector<Vehicle> heap;
    int parent, left_child, right_child;
    void heapifyUp(int index);
    void heapifyDown(int index);
public:
    max_heap(){};
    void insert(Vehicle target);
    void deleteMax();
    Vehicle extractMax();
    max_heap typeSelection(string type);
    max_heap budgetSelection(int budget);
    max_heap yearSelection(int max, int min);
    max_heap brandSelection(string brand);
    max_heap transmissionSelection(string transmission);
    max_heap fuelSelection(string fuel);
    max_heap purposeSelection(float max, float min);
    max_heap seatsSelection(int minSeats, int maxSeats);
    max_heap riskSelection();
    max_heap airbagSelection();
    max_heap childSelection();
    max_heap cameraSelection();
    max_heap assistanceSelection();
    max_heap lightSelection();
    min_heap reverse();
    void print();
};

#endif //CAR_SELECTION_HEAP_H
