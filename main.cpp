#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <sstream>
#include <regex>
#include <fstream>
#include "Vehicle.h"
#include "Hash.cpp"
#include "heap.h"
#include "heap.cpp"
using namespace std;
bool checkValidInteger(string input){
    regex constraint = regex("^[0-9]{1,1}$");
    if(!regex_search(input, constraint))
        cout << "Invalid input! Try again" << endl;
    return regex_search(input, constraint);
}
bool checkValidIntInput(string input){
    regex constraint = regex("^[0-9]+$");
    if(!regex_search(input, constraint))
        cout << "Invalid input! Try again" << endl;
    return regex_search(input, constraint);
}
 
bool checkValidString(string input){
    regex constraint = regex("^[A-Z][a-zA-Z]*$");
    if(!regex_search(input, constraint))
        cout << "Invalid input! Try again" << endl;
    return regex_search(input, constraint);
}
bool checkIndexThree(string input){
    regex constraint = regex("^[1-3]{1,1}$");
    if(!regex_search(input, constraint))
        cout << "Invalid input! Try again" << endl;
    return regex_search(input, constraint);
}
bool checkIndexTwo(string input){
    regex constraint = regex("^[1-2]{1,1}$");
    if(!regex_search(input, constraint))
        cout << "Invalid input! Try again" << endl;
    return regex_search(input, constraint);
}
bool checkIndexFive(string input){
    regex constraint = regex("^[1-5]{1,1}$");
    if(!regex_search(input, constraint))
        cout << "Invalid input! Try again" << endl;
    return regex_search(input, constraint);
}

void getVehicleData(string file, vector<Vehicle>& vehicles) {
    ifstream inFile(file);
    if (inFile.is_open()) {
        string line;
        getline(inFile, line);
        while (getline(inFile, line)) {//catch read in error, fix by altering code or erase flawed data
            try {
                string temp;
                int _A;
                int _B;
                string _C;
                string _D;
                int _E;
                int _F;
                int _G;
                float _H;
                int _I;
                int _J;
                float _K;
                float _L;
                float _M;
                float _N;
                float _O;
                string _P;
                int _Q;
                int _R;
                bool _S;
                bool _T;
                bool _U;
                bool _V;
                bool _W;
                bool _X;
                bool _Y;
                bool _Z;
                bool _AA;
                bool _AB;
                float _AC;
                string _AD;
                string _AE;
                int _AF;
                string _AG;
                string _AH;
                string _AI;
                string _AJ;
                string _AK;
                string _AL;
                string _AM;
                string _AN;
                string _AO;
                string _AP;
                string _AQ;
                string _AR;
                string _AS;
                istringstream stream(line);
                getline(stream, temp, ',');
                _A = stoi(temp);
                getline(stream, temp, ',');
                _B = stoi(temp);
                getline(stream, _C, ',');
                getline(stream, _D, ',');
                getline(stream, temp, ',');
                _E = stoi(temp);
                getline(stream, temp, ',');
                _F = stoi(temp);
                getline(stream, temp, ',');
                _G = stoi(temp);
                getline(stream, temp, ',');
                _H = stof(temp);
                getline(stream, temp, ',');
                _I = stoi(temp);
                getline(stream, temp, ',');
                _J = stoi(temp);
                getline(stream, temp, ',');
                _K = stof(temp);
                getline(stream, temp, ',');
                _L = stof(temp);
                getline(stream, temp, ',');
                _M = stof(temp);
                getline(stream, temp, ',');
                _N = stof(temp);
                getline(stream, temp, ',');
                _O = stof(temp);
                getline(stream, _P, ',');
                getline(stream, temp, ',');
                _Q = stoi(temp);
                getline(stream, temp, ',');
                _R = stoi(temp);
                getline(stream, temp, ',');
                _S = (temp == "1");//parse string into bool, which means everything except 1 is false
                getline(stream, temp, ',');
                _T = (temp == "1");
                getline(stream, temp, ',');
                _U = (temp == "1");
                getline(stream, temp, ',');
                _V = (temp == "1");
                getline(stream, temp, ',');
                _W = (temp == "1");
                getline(stream, temp, ',');
                _X = (temp == "1");
                getline(stream, temp, ',');
                _Y = (temp == "1");
                getline(stream, temp, ',');
                _Z = (temp == "1");
                getline(stream, temp, ',');
                _AA = (temp == "1");
                getline(stream, temp, ',');
                _AB = (temp == "1");
                getline(stream, temp, ',');
                _AC = stof(temp);
                getline(stream, _AD, ',');
                getline(stream, _AE, ',');
                getline(stream, temp, ',');
                _AF = stoi(temp);
                getline(stream, _AG, ',');
                getline(stream, _AH, ',');

                getline(stream, _AI, ',');
                getline(stream, _AJ, ',');
                getline(stream, _AK, ',');
                getline(stream, _AL, ',');
                getline(stream, _AM, ',');
                getline(stream, _AN, ',');
                getline(stream, _AO, ',');
                getline(stream, _AP, ',');
                getline(stream, _AQ, ',');
                getline(stream, _AR, ',');
                Vehicle V(_A, _B, _C, _D, _E, _F, _G, _H, _I, _J, _K, _L, _M, _N, _O, _P, _Q, _R, _S, _T, _U, _V, _W,
                          _X, _Y, _Z, _AA, _AB, _AC, _AD, _AE, _AF, _AG, _AH, _AI, _AJ, _AK, _AL, _AM, _AN, _AO, _AP,
                          _AQ, _AR);
                vehicles.push_back(V);
            } catch (exception) {cout<<vehicles.size() << endl;}
        }
    }
}

bool CompareMSRP(Vehicle car1, Vehicle car2) // sort from low to high
{
    return (car1.msrp < car2.msrp);
}

bool ComparePower(Vehicle car1, Vehicle car2) // sort from high to low
{
    return (car1.horsepower > car2.horsepower);
}

int main() {
    clock_t startT, endT;
    double time_taken;
    double totalTime;
    int dataSize = 30296;
    int choice;
    string input;
    string inputString;

    vector<Vehicle> vehicles;
    getVehicleData("CarData.csv", vehicles);
    cout << "***********************************************************************************************************\nWelcome to EZCAR, your personal vehicle shopping assistance!\nThis tool will bring every vehicle that satisfies your needs!\nWe will simply ask several questions, and you will be presented with a list of car that satisfy your needs.\n***********************************************************************************************************" << endl;
    
    cout << "\nWhich data structure you want to test?(Entere Index) \n1. Heap  2. HashTable" << endl;
    cin >>  choice;
if (choice == 1)
    {
        // heap part create a max_heap and add all vehicle inf. to the heap
        max_heap car;
        for(int i = 0; i < vehicles.size(); i++){
            car.insert(vehicles[i]);
        }
        int choice;
        clock_t start, end;
        double time_taken;
        double total_time = 0;
            max_heap aftertypeSelection;
            max_heap afterbudgetSelection;
            max_heap afteryearSelection;
            max_heap afterbrandSelection;
            max_heap aftertransSelection;
            max_heap afterfuelSelection;
            max_heap afterpurposetSelection;
            max_heap afterseatsSelection;
            max_heap afterriskSelection;
            max_heap afterairbSelection;
            max_heap afterchildSelection;
            max_heap aftercameraSelection;
            max_heap afterassSelection;
            max_heap afterlightSelection;
            max_heap final_high;
            min_heap final_low;
            //typeselection
            bool proceed = false;
            while(!proceed){
                cout << "What type of car are you looking for?(Enter Index) \n1. Car 2. SUV 3. Pickup 4. Van 5. Any" << endl;
                cin >> input;
                proceed = checkIndexFive(input);
                if(proceed){
                    choice = stoi(input);
                }
            }
            int type = choice;

            start = clock();
            if (type == 1) {
                aftertypeSelection = car.typeSelection("Car");
            }
            if (type == 2) {
                aftertypeSelection = car.typeSelection("SUV");
            }
            if (type == 3) {
                aftertypeSelection = car.typeSelection("Pickup");
            }
            if (type == 4) {
                aftertypeSelection = car.typeSelection("Van");
            }
            if (type == 5) {
                aftertypeSelection = car;
            }
            end = clock();
            time_taken = double(end - start) / double(CLOCKS_PER_SEC);
            total_time += time_taken;
            cout << "Time taken by this step is: " << fixed << time_taken << setprecision(5);
            cout << " sec" << endl;
            cout << " " << endl;

        if(aftertypeSelection.size() == 0){//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }

        //budget selection
            proceed = false;
            while(!proceed){
                cout << "How much are you planning to spend on this vehicle? (Enter \"0\" to skip)" << endl;
                cin >> input;
                proceed = checkValidIntInput(input);
                if(proceed){
                    choice = stoi(input);
                }
            }

            int budget = choice;
            start = clock();
            if (budget == 0) {
                afterbudgetSelection = aftertypeSelection;
            } else {
                afterbudgetSelection = aftertypeSelection.budgetSelection(budget);
            }
            end = clock();
            time_taken = double(end - start) / double(CLOCKS_PER_SEC);
            total_time += time_taken;
            cout << "Time taken by this step is: " << fixed << time_taken << setprecision(5);
            cout << " sec" << endl;
            cout << " " << endl;

        if(afterbudgetSelection.size() == 0){//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }



        proceed = false;
            while(!proceed){
                cout << "What is an ideal year range for your car? \n1. New(2015-2019) 2. Intermediate(2006-2014) 3. Old(before 2005) 4. Any" << endl;
                cin >> input;
                proceed = checkIndexThree(input);
                if(proceed){
                    choice = stoi(input);
                }
            }


            int year = choice;
            start = clock();
            if (year == 1) {
                afteryearSelection = afterbudgetSelection.yearSelection(2019, 2015);
            }
            if (year == 2) {
                afteryearSelection = afterbudgetSelection.yearSelection(2014, 2006);
            }
            if (year == 3) {
                afteryearSelection = afterbudgetSelection.yearSelection(2005, 0);
            }
            end = clock();
            time_taken = double(end - start) / double(CLOCKS_PER_SEC);
            total_time += time_taken;
            cout << "Time taken by this step is: " << fixed << time_taken << setprecision(5);
            cout << " sec" << endl;
            cout << " " << endl;

        if(afteryearSelection.size() == 0){//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }



        proceed = false;
            while(!proceed){
                cout << "Do you have a preferred brand/manufacturer? (Enter \"Skip\" to skip)" << endl;
                cin >> input;
                proceed = checkValidString(input);

            }

            string brand = input;
            start = clock();
            if (brand == "Skip") {
                afterbrandSelection = afteryearSelection;
            } else {
                afterbrandSelection = afteryearSelection.brandSelection(brand);
            }
            end = clock();
            time_taken = double(end - start) / double(CLOCKS_PER_SEC);
            total_time += time_taken;
            cout << "Time taken by this step is: " << fixed << time_taken << setprecision(5);
            cout << " sec" << endl;
            cout << " " << endl;

        if(afterbrandSelection.size() == 0){//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }


        proceed = false;
            while(!proceed){
                cout << "Do you have a preferred type of transmission? \n1. Automatic 2. Manual 3. Any" << endl;
                cin >> input;
                proceed = checkIndexThree(input);
                if(proceed){
                    choice = stoi(input);
                }
            }

            int transmission = choice;
            start = clock();
            if (transmission == 1) {
                aftertransSelection = afterbrandSelection.transmissionSelection("Automatic");
            }
            if (transmission == 2) {
                aftertransSelection = afterbrandSelection.transmissionSelection("Manual");
            }
            if (transmission == 3) {
                aftertransSelection = afterbrandSelection;
            }
            end = clock();
            time_taken = double(end - start) / double(CLOCKS_PER_SEC);
            total_time += time_taken;
            cout << "Time taken by this step is: " << fixed << time_taken << setprecision(5);
            cout << " sec" << endl;
            cout << " " << endl;
        if(aftertransSelection.size() == 0){//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }


        bool electric = false;

            proceed = false;
            while(!proceed){
                cout << "Fuel type? \n1. Fully electric 2. Gas/Hybrid" << endl;
                cin >> input;
                proceed = checkIndexTwo(input);
                if(proceed){
                    choice = stoi(input);
                }
            }


            int fuel = choice;
            start = clock();
            if (fuel == 1) {
                afterfuelSelection = aftertransSelection.fuelSelection(1);
                electric = true;
            }
            if (fuel == 2) {
                afterfuelSelection = aftertransSelection.fuelSelection(2);
            }
            end = clock();
            time_taken = double(end - start) / double(CLOCKS_PER_SEC);
            total_time += time_taken;
            cout << "Time taken by this step is: " << fixed << time_taken << setprecision(5);
            cout << " sec" << endl;
            cout << " " << endl;

        if(afterfuelSelection.size() == 0){//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }


        if (electric) {
                afterpurposetSelection = afterfuelSelection;
            }
            if (!electric) {
                proceed = false;
                while(!proceed){
                    cout << "What's your main purpose of purchasing this vehicle?(Displacement requirement)\n1. Daily commuting (below 2.0) 2. Performance (2.0 to 3.7) 3. Racing (above 3.7) " << endl;
                    cin >> input;
                    proceed = checkIndexThree(input);
                    if(proceed){
                        choice = stoi(input);
                    }
                }

                int purpose = choice;

                start = clock();
                if (purpose == 1) {
                    afterpurposetSelection = afterfuelSelection.purposeSelection(2.0, 0);
                }
                if (purpose == 2) {
                    afterpurposetSelection = afterfuelSelection.purposeSelection(3.69, 1.99);
                }
                if (purpose == 3) {
                    afterpurposetSelection = afterfuelSelection.purposeSelection(10000, 3.7);
                }
            }

            end = clock();
            time_taken = double(end - start) / double(CLOCKS_PER_SEC);
            total_time += time_taken;
            cout << "Time taken by this step is: " << fixed << time_taken << setprecision(5);
            cout << " sec" << endl;
            cout << " " << endl;

        if(afterpurposetSelection.size() == 0){//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }



        proceed = false;
            while(!proceed){
                cout << "How many passenger seats are you expecting?\n 1. Less than one 2. Two to five 3. More than five" << endl;
                cin >> input;
                proceed = checkIndexThree(input);
                if(proceed){
                    choice = stoi(input);
                }
            }


            int passenger = choice;
            start = clock();
            if (passenger == 1) {
                afterseatsSelection = afterpurposetSelection.seatsSelection(0, 2);
            }
            if (passenger == 2) {
                afterseatsSelection = afterpurposetSelection.seatsSelection(2, 6);
            }
            if (passenger == 3) {
                afterseatsSelection = afterpurposetSelection.seatsSelection(5, 10000);
            }
            end = clock();
            time_taken = double(end - start) / double(CLOCKS_PER_SEC);
            total_time += time_taken;
            cout << "Time taken by this step is: " << fixed << time_taken << setprecision(5);
            cout << " sec" << endl;
            cout << " " << endl;
        if(afterseatsSelection.size() == 0){//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }



        proceed = false;
            while(!proceed){
                cout << "Would you want traction control and stability control for safer handling? \n1. Yes 2. Skip this question" << endl;
                cin >> input;
                proceed = checkIndexTwo(input);
                if(proceed){
                    choice = stoi(input);
                }
            }


            int risk = choice;

            start = clock();
            if (risk == 1) {
                afterriskSelection = afterseatsSelection.riskSelection();
            }
            if (risk == 2) {
                afterriskSelection = afterseatsSelection;
            }
            end = clock();
            time_taken = double(end - start) / double(CLOCKS_PER_SEC);
            total_time += time_taken;
            cout << "Time taken by this step is: " << fixed << time_taken << setprecision(5);
            cout << " sec" << endl;
            cout << " " << endl;
        if(afterriskSelection.size() == 0){//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }



        proceed = false;
            while(!proceed){
                cout << "Best protection (above 5 airbags and rollover protect) in case of an accident? \n1. Yes 2. Skip this question" << endl;
                cin >> input;
                proceed = checkIndexTwo(input);
                if(proceed){
                    choice = stoi(input);
                }
            }

            int airbags = choice;

            start = clock();
            if (airbags == 1) {
                afterairbSelection = afterriskSelection.airbagSelection();
            }
            if (airbags == 2) {
                afterairbSelection = afterriskSelection;
            }
            end = clock();
            time_taken = double(end - start) / double(CLOCKS_PER_SEC);
            total_time += time_taken;
            cout << "Time taken by this step is: " << fixed << time_taken << setprecision(5);
            cout << " sec" << endl;
            cout << " " << endl;
        if(afterairbSelection.size() == 0){//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }



        proceed = false;
            while(!proceed){
                cout << "Will there be a child in this vehicle? \n1. Yes 2. Skip this question" << endl;
                cin >> input;
                proceed = checkIndexTwo(input);
                if(proceed){
                    choice = stoi(input);
                }
            }


            int child = choice;

            start = clock();
            if (child == 1) {
                afterchildSelection = afterairbSelection.childSelection();
            }
            if (child == 2) {
                afterchildSelection = afterairbSelection;
            }
            end = clock();
            time_taken = double(end - start) / double(CLOCKS_PER_SEC);
            total_time += time_taken;
            cout << "Time taken by this step is: " << fixed << time_taken << setprecision(5);
            cout << " sec" << endl;
            cout << " " << endl;
        if(afterchildSelection.size() == 0){//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }



        proceed = false;
            while(!proceed){
                cout << "Do you need a back-up camera? \n1. Yes 2. Skip this question" << endl;
                cin >> input;
                proceed = checkIndexTwo(input);
                if(proceed){
                    choice = stoi(input);
                }
            }


            int camera = choice;
            start = clock();
            if (camera == 1) {
                aftercameraSelection = afterchildSelection.cameraSelection();
            }
            if (camera == 2) {
                aftercameraSelection = afterchildSelection;
            }
            end = clock();
            time_taken = double(end - start) / double(CLOCKS_PER_SEC);
            total_time += time_taken;
            cout << "Time taken by this step is: " << fixed << time_taken << setprecision(5);
            cout << " sec" << endl;
            cout << " " << endl;
        if(aftercameraSelection.size() == 0){//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }



        proceed = false;
            while(!proceed){
                cout << "Parking assistance? \n1. Yes 2. Skip this question" << endl;
                cin >> input;
                proceed = checkIndexTwo(input);
                if(proceed){
                    choice = stoi(input);
                }
            }

            int ass = choice;

            start = clock();
            if (ass == 1) {
                afterassSelection = aftercameraSelection.assistanceSelection();
            }
            if (ass == 2) {
                afterassSelection = aftercameraSelection;
            }
            end = clock();
            time_taken = double(end - start) / double(CLOCKS_PER_SEC);
            total_time += time_taken;
            cout << "Time taken by this step is: " << fixed << time_taken << setprecision(5);
            cout << " sec" << endl;
            cout << " " << endl;
        if(afterassSelection.size() == 0){//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }



        proceed = false;
            while(!proceed){
                cout << "Day-time running lights? \n1. Yes 2. Skip this question" << endl;
                cin >> input;
                proceed = checkIndexTwo(input);
                if(proceed){
                    choice = stoi(input);
                }
            }

            int light = choice;

            start = clock();
            if (light == 1) {
                afterlightSelection = afterassSelection.lightSelection();
            }
            if (light == 2) {
                afterlightSelection = afterassSelection;
            }
            end = clock();
            time_taken = double(end - start) / double(CLOCKS_PER_SEC);
            total_time += time_taken;
            cout << "Time taken by this step is: " << fixed << time_taken << setprecision(5);
            cout << " sec" << endl;
            cout << " " << endl;
        if(afterlightSelection.size() == 0){//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }


        proceed = false;
            while(!proceed){
                cout << "Your result is ready! How would you like it to be presented? \n1. Budget (Low to high) 2. Performance(High to low)" << endl;
                cin >> input;
                proceed = checkIndexTwo(input);
                if(proceed){
                    choice = stoi(input);
                }
            }
            int price = choice;
            vector<Vehicle> result;
            start = clock();
            if (price == 1) {
                final_low = afterlightSelection.reverse();
                result = final_low.print();
            }
            if (price == 2) {
                final_high = afterlightSelection;
                result = final_high.print();
            }
            end = clock();
            time_taken = double(end - start) / double(CLOCKS_PER_SEC);
            total_time += time_taken;
            cout << "Time taken by this step is: " << fixed << time_taken << setprecision(5);
            cout << " sec" << endl;
            cout << " " << endl;
            cout << "Total time taken by this execution is: " << fixed << total_time << setprecision(5);
            cout << " sec" << endl;
            cout << " " << endl;

        bool endExe = false;
        string endInput;
        proceed = false;
        while(!endExe)
        {
            while(!proceed){
                cout << "Enter an index for further detail" << endl;
                cin >> input;
                proceed = checkValidIntInput(input);
                if(proceed){
                    choice = stoi(input);
                }
            }
            int index = choice;
            for (int i = 0; i < result.size(); i++) {
                if (i == index) {
                    result[i-1].printInfo();
                    break;
                } else {
                    continue;
                }
            }
            cout << "Enter \"exit\" to exit the program or any input to continue." << endl;
            cin >> endInput;
            if(endInput == "exit")
            {
                cout << "Thank you for using EZCAR shopping assistance! I hope you enjoy the experience!" << endl;
                endExe = true;
            }
            else
            {
                proceed = false;
            }
        }
        }
    else if (choice == 2)
    {
        list<Vehicle> temp;
        list<Vehicle>* table;

        Hash q1(dataSize);

        for (int i = 0; i < vehicles.size(); i++)
        {
            q1.insertItem(vehicles.at(i), vehicles.at(i).category);
        }

// question 1
        bool proceed = false;
        while(!proceed)
        {
            cout << "\nWhat type of car are you looking for?(Enter Index) \n1. Car 2. SUV 3. Pickup 4. Van 5. Any" << endl;
            cin >> input;
            proceed = checkIndexFive(input);
            if(proceed){
                choice = stoi(input);
            }
        }

        startT = clock();
        Hash q2(dataSize);
        if (choice == 1)
        {
            temp = q1.searchItem("Car");
            for (auto i : temp)
            {
                if (i.category == "Car")
                {
                    q2.insertItem(i, i.msrp);
                }
            }
        }
        else if (choice == 2)
        {
            temp = q1.searchItem("SUV");
            for (auto i : temp)
            {
                if (i.category == "SUV")
                {
                    q2.insertItem(i, i.msrp);
                }
            }
        }
        else if (choice == 3)
        {
            temp = q1.searchItem("Pickup");
            for (auto i : temp)
            {
                if (i.category == "Pickup")
                {
                    q2.insertItem(i, i.msrp);
                }
            }
        }
        else if (choice == 4)
        {
            temp = q1.searchItem("Van");
            for (auto i : temp)
            {
                if (i.category == "Van")
                {
                    q2.insertItem(i, i.msrp);
                }
            }
        }
        endT = clock();
        time_taken = double(endT - startT) / double(CLOCKS_PER_SEC);
        totalTime += time_taken;
        cout << "time: " << fixed << time_taken << setprecision(5) << " sec" << endl;

        if(q2.getSize() == 0)
        {//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }


// question 2
        proceed = false;
        while(!proceed)
        {
            cout << "\nHow much are you planning to spend on this vehicle? (Enter \"0\" to skip)" << endl;
            cin >> input;
            proceed = checkValidIntInput(input);
            if(proceed){
                choice = stoi(input);
            }
        }

        startT = clock();
        Hash q3(q2.getSize());
        table = q2.getTable();

        if (choice == 0)
        {
            for (int i = 0; i < dataSize; i++)
            {
                for (auto j : table[i])
                {
                    q3.insertItem(j, j.year);
                }
            }
        }
        else 
        {
            for (int i = 0; i < dataSize; i++)
            {
                for (auto j : table[i])
                {
                    if (j.msrp < choice)
                    {
                        q3.insertItem(j, j.year);
                    }
                }
            }
        }
        endT = clock();
        time_taken = double(endT - startT) / double(CLOCKS_PER_SEC);
        totalTime += time_taken;
        cout << "time: " << time_taken << fixed << setprecision(5) << " sec" << endl;

        if(q3.getSize() == 0)
        {//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }

// question 3
        proceed = false;
        while(!proceed){
            cout << "\nWhat is an ideal year range for your car? \n1. New(2015-2019) 2. Intermediate(2005-2015) 3. Old(before 2005) 4. Any" << endl;
            cin >> input;
            proceed = checkIndexThree(input);
            if(proceed){
                choice = stoi(input);
            }
        }

        startT = clock();
        Hash q4(q3.getSize());
        table = q3.getTable();

        if (choice == 1)
        {
            for (int i = 0; i < q2.getSize(); i++)
            {
                for (auto j : table[i])
                {
                    if (j.year <= 2019 && j.year >= 2015)
                    {
                        q4.insertItem(j, j.manufacturer);
                    }
                }
            }
        }
        else if (choice == 2)
        {
            for (int i = 0; i < q2.getSize(); i++)
            {
                for (auto j : table[i])
                {
                    if (j.year <= 2014 && j.year >= 2006)
                    {
                        q4.insertItem(j, j.manufacturer);
                    }
                }
            }
        }
        else if (choice == 3)
        {
            for (int i = 0; i < q2.getSize(); i++)
            {
                for (auto j : table[i])
                {
                    if (j.year <= 2005)
                    {
                        q4.insertItem(j, j.manufacturer);
                    }
                }
            }
        }
        endT = clock();
        time_taken = double(endT - startT) / double(CLOCKS_PER_SEC);
        totalTime += time_taken;
        cout << "time: " << time_taken << fixed << setprecision(5) << " sec" << endl;

    if(q4.getSize() == 0)
        {//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }

// question 4
        proceed = false;
        while(!proceed)
        {
            cout << "\nDo you have a preferred brand/manufacturer? (Enter \"Skip\" to skip)" << endl;
            cin >> input;
            proceed = checkValidString(input);
        }

        startT = clock();
        Hash q5(q4.getSize());

        if (input == "Skip")
        {
            table = q4.getTable();
            for (int i = 0; i < q3.getSize(); i++)
            {
                for (auto j : table[i])
                {
                    q5.insertItem(j, j.transmission);
                }
            }
        }
        else 
        {
            temp = q4.searchItem(input);
            for (auto i : temp)
            {
                if (i.manufacturer == input)
                {
                    q5.insertItem(i, i.transmission);
                }
            }
        }
        endT = clock();
        time_taken = double(endT - startT) / double(CLOCKS_PER_SEC);
        totalTime += time_taken;
        cout << "time: " << time_taken << fixed << setprecision(5) << " sec" << endl;

        if(q5.getSize() == 0)
        {//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }

// question 5
        proceed = false;
        while(!proceed)
        {
            cout << "\nDo you have a preferred type of transmission? \n1. Automatic 2. Manual 3. Any" << endl;
            cin >> input;
            proceed = checkIndexThree(input);
            if(proceed){
                choice = stoi(input);
            }
        }

        startT = clock();
        Hash q6(q5.getSize());

        if (choice == 1)
        {
            temp = q5.searchItem("Automatic");
            for (auto i : temp)
            {
                if (i.transmission == "Automatic")
                {
                    if (i.engine != "Electric")
                        q6.insertItem(i, "Gas");
                    else
                        q6.insertItem(i, "Electric");
                }
            }
        }
        else
        {
            temp = q5.searchItem("Manual");
            for (auto i : temp)
            {
                if (i.transmission == "Manual")
                {
                    if (i.engine != "Electric")
                        q6.insertItem(i, "Gas");
                    else
                        q6.insertItem(i, "Electric");
                }
            }
        }
        endT = clock();
        time_taken = double(endT - startT) / double(CLOCKS_PER_SEC);
        totalTime += time_taken;
        cout << "time: " << time_taken << fixed << setprecision(5) << " sec" << endl;

        if(q6.getSize() == 0)
        {//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }

// question 6
        proceed = false;
        bool skip = false;
        while(!proceed){
            cout << "\nFuel type? \n1. Fully electric 2. Gas/Hybrid" << endl;
            cin >> input;
            proceed = checkIndexTwo(input);
            if(proceed){
                choice = stoi(input);
            }
        }

        startT = clock();
        Hash q7(q6.getSize());

        if (choice == 1)
        {
            skip = true;
            temp = q6.searchItem("Electric");
            for (auto i : temp)
            {
                if (i.engine == "Electric")
                {
                    if (i.displacement < 2.0)
                    {
                        q7.insertItem(i, 1);
                    }
                    else if (i.displacement >= 2.0 && i.displacement < 3.0)
                    {
                        q7.insertItem(i, 2);
                    }
                    else if (i.displacement >= 3.0 && i.displacement < 4.0)
                    {
                        q7.insertItem(i, 3);
                    }
                    else
                    {
                        q7.insertItem(i, 4);
                    }
                }
            }
        }
        else
        {
            temp = q6.searchItem("Gas");
            for (auto i : temp)
            {
                if (i.engine != "Electric")
                {
                    if (i.displacement < 2.0)
                    {
                        q7.insertItem(i, 1);
                    }
                    else if (i.displacement >= 2.0 && i.displacement < 3.0)
                    {
                        q7.insertItem(i, 2);
                    }
                    else if (i.displacement >= 3.0 && i.displacement < 4.0)
                    {
                        q7.insertItem(i, 3);
                    }
                    else
                    {
                        q7.insertItem(i, 4);
                    }
                }
            }
        }
        endT = clock();
        time_taken = double(endT - startT) / double(CLOCKS_PER_SEC);
        totalTime += time_taken;
        cout << "time: " << time_taken << fixed << setprecision(5) << " sec" << endl;

        if(q7.getSize() == 0)
        {//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }

// question 7
        Hash q8(q7.getSize());
        if (!skip) // electric car do not have displacement
        {
            proceed = false;
            while(!proceed){
                cout << "\nWhat's your main purpose of purchasing this vehicle?(Displacement requirement)\n1. Daily commuting (below 2.0) 2. Performance (2.0 to 3.7) 3. Racing (above 3.7) " << endl;
                cin >> input;
                proceed = checkIndexThree(input);
                if(proceed){
                    choice = stoi(input);
                }
            }

            startT = clock();

            if (choice == 1)
            {
                temp = q7.searchItem(1);
                for (auto i : temp)
                {
                    if (i.displacement < 2.0)
                    {
                        q8.insertItem(i, i.passengerCapacity);
                    }
                }

            }
            else if (choice == 2)
            {
                temp = q7.searchItem(2);
                for (auto i : temp)
                {
                    if (i.displacement >= 2.0 && i.displacement <= 3.7)
                    {
                        q8.insertItem(i, i.passengerCapacity);
                    }
                }
                temp = q7.searchItem(3);
                for (auto i : temp)
                {
                    if (i.displacement >= 2.0 && i.displacement <= 3.7)
                    {
                        q8.insertItem(i, i.passengerCapacity);
                    }
                }
            }
            else if (choice == 3)
            {
                temp = q7.searchItem(3);
                for (auto i : temp)
                {
                    if (i.displacement > 3.7)
                    {
                        q8.insertItem(i, i.passengerCapacity);
                    }
                }
                temp = q7.searchItem(4);
                for (auto i : temp)
                {
                    if (i.displacement > 3.7)
                    {   
                        q8.insertItem(i, i.passengerCapacity);
                    }
                }
            }
            endT = clock();
            time_taken = double(endT - startT) / double(CLOCKS_PER_SEC);
            totalTime += time_taken;
            cout << "time: " << time_taken << fixed << setprecision(5) << " sec" << endl;
        }
        else 
        {
            
            table = q7.getTable();
            for (int i = 0; i < q6.getSize(); i++)
            {
                for (auto j : table[i])
                {
                    q8.insertItem(j, j.passengerCapacity);
                }
            }
        }
        if(q8.getSize() == 0)
        {//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }

// question 8
        proceed = false;
        while(!proceed){
            cout << "\nHow many passenger seats are you expecting?\n1. Less than one 2. Two to five 3. More than five" << endl;
            cin >> input;
            proceed = checkIndexThree(input);
            if(proceed){
                choice = stoi(input);
            }
        }

        startT = clock();
        Hash q9(q8.getSize());

        if (choice == 1)
        {
            for(int i = 0; i <= 1; i++)
            {
                temp = q8.searchItem(i);
                for (auto j : temp)
                {
                    q9.insertItem(j, j.tractionControl);
                }
            }
        }
        else if (choice == 2)
        {
            for(int i = 2; i <= 5; i++)
            {
                temp = q8.searchItem(i);
                for (auto j : temp)
                {
                    q9.insertItem(j, j.tractionControl);
                }
            }
        }
        else if (choice == 3)
        {
            for(int i = 5; i <= 12; i++)
            {
                temp = q8.searchItem(i);
                for (auto j : temp)
                {
                    q9.insertItem(j, j.tractionControl);
                }
            }
        }
        endT = clock();
        time_taken = double(endT - startT) / double(CLOCKS_PER_SEC);
        totalTime += time_taken;
        cout << "time: " << time_taken << fixed << setprecision(5) << " sec" << endl;

        if(q9.getSize() == 0)
        {//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }

//question 9
        proceed = false;
        while(!proceed){
            cout << "\nWould you want traction control and stability control for safer handling? \n1. Yes 2. Skip this question" << endl;
            cin >> input;
            proceed = checkIndexTwo(input);
            if(proceed){
                choice = stoi(input);
            }
        }

        startT = clock();
        Hash q10(q9.getSize());

        if (choice == 1)
        {
            temp = q9.searchItem(1);
            for (auto i : temp)
            {
                if(i.stabilityControl == 1)
                {
                    q10.insertItem(i, i.rolloverProtect);
                }
            }
        }
        else
        {
            table = q9.getTable();
            for (int i = 0; i < q8.getSize(); i++)
            {
                for (auto j : table[i])
                {
                    q10.insertItem(j, j.rolloverProtect);
                }
            }
        }
        endT = clock();
        time_taken = double(endT - startT) / double(CLOCKS_PER_SEC);
        totalTime += time_taken;
        cout << "time: " << time_taken << fixed << setprecision(5) << " sec" << endl;

        if(q10.getSize() == 0)
        {//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }

// question 10
        proceed = false;
        while(!proceed){
            cout << "\nBest protection (above 5 airbags and rollover protect) in case of an accident? \n1. Yes 2. Skip this question" << endl;
            cin >> input;
            proceed = checkIndexTwo(input);
            if(proceed){
                choice = stoi(input);
            }
        }

        startT = clock();
        Hash q11(q10.getSize());
        if (choice == 1)
        {
            temp = q10.searchItem(1);
            for (auto i : temp)
            {
                if (i.airbags >= 5)
                {
                    q11.insertItem(i, i.childSafety);
                }
            }
        }
        else
        {
            table = q10.getTable();
            for (int i = 0; i < q9.getSize(); i++)
            {
                for (auto j : table[i])
                {
                    q11.insertItem(j, j.childSafety);
                }
            }
        }
        endT = clock();
        time_taken = double(endT - startT) / double(CLOCKS_PER_SEC);
        totalTime += time_taken;
        cout << "time: " << time_taken << fixed << setprecision(5) << " sec" << endl;

        if(q11.getSize() == 0)
        {//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }

// question 11
        proceed = false;
        while(!proceed){
            cout << "\nWill there be a child in this vehicle? \n1. Yes 2. Skip this question" << endl;
            cin >> input;
            proceed = checkIndexTwo(input);
            if(proceed){
                choice = stoi(input);
            }
        }

        startT = clock();
        Hash q12(q11.getSize());

        if (choice == 1)
        {
            temp = q11.searchItem(1);
            for (auto i : temp)
            {
                q12.insertItem(i, i.backCamera);
            }
        }
        else
        {
            table = q11.getTable();
            for (int i = 0; i < q10.getSize(); i++)
            {
                for (auto j : table[i])
                {
                    q12.insertItem(j, j.backCamera);
                }
            }
        }
        endT = clock();
        time_taken = double(endT - startT) / double(CLOCKS_PER_SEC);
        totalTime += time_taken;
        cout << "time: " << time_taken << fixed << setprecision(5) << " sec" << endl;

        if(q12.getSize() == 0)
        {//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }

// question 12
        proceed = false;
        while(!proceed){
            cout << "\nDo you need a back-up camera? \n1. Yes 2. Skip this question" << endl;
            cin >> input;
            proceed = checkIndexTwo(input);
            if(proceed){
                choice = stoi(input);
            }
        }

        startT = clock();
        Hash q13(q12.getSize());

        if (choice == 1)
        {
            temp = q12.searchItem(1);
            for (auto i : temp)
            {
                q13.insertItem(i, i.parkingAid);
            }
        }
        else
        {
            table = q12.getTable();
            for (int i = 0; i < q11.getSize(); i++)
            {
                for (auto j : table[i])
                {
                    q13.insertItem(j, j.parkingAid);
                }
            }
        }
        endT = clock();
        time_taken = double(endT - startT) / double(CLOCKS_PER_SEC);
        totalTime += time_taken;
        cout << "time: " << time_taken << fixed << setprecision(5) << " sec" << endl;

        if(q13.getSize() == 0)
        {//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }

// question 13
        proceed = false;
        while(!proceed){
            cout << "\nParking assistance? \n1. Yes 2. Skip this question" << endl;
            cin >> input;
            proceed = checkIndexTwo(input);
            if(proceed){
                choice = stoi(input);
            }
        }

        startT = clock();
        Hash q14(q13.getSize());

        if (choice == 1)
        {
            temp = q13.searchItem(1);
            for (auto i : temp)
            {
                q14.insertItem(i, i.daytimeLights);
            }
        }
        else
        {
            table = q13.getTable();
            for (int i = 0; i < q12.getSize(); i++)
            {
                for (auto j : table[i])
                {
                    q14.insertItem(j, j.daytimeLights);
                }
            }
        }
        endT = clock();
        time_taken = double(endT - startT) / double(CLOCKS_PER_SEC);
        totalTime += time_taken;
        cout << "time: " << time_taken << fixed << setprecision(5) << " sec" << endl;

        if(q14.getSize() == 0)
        {//add your .empty function here.
            cout << "\nSorry, there are no vehicle meeting your requirements! Try to widen your choices and start again." << endl;
            return 0;
        }

// question 14
        proceed = false;
        while(!proceed){
            cout << "\nDay-time running lights? \n1. Yes 2. Skip this question" << endl;
            cin >> input;
            proceed = checkIndexTwo(input);
            if(proceed){
                choice = stoi(input);
            }
        }

        startT = clock();
        vector<Vehicle> recommandCars;
        set<string> visited;

        if (choice == 1)
        {
            temp = q14.searchItem(1);
            for (auto i : temp)
            {
                if (!visited.count(i.model))
                {
                    recommandCars.push_back(i);
                    visited.insert(i.model);
                }
            }
        }
        else
        {
            table = q14.getTable();
            for (int i = 0; i < q13.getSize(); i++)
            {
                for (auto j : table[i])
                {
                    if (!visited.count(j.model))
                    {
                        recommandCars.push_back(j);
                        visited.insert(j.model);
                    }
                }
            }
        }
        endT = clock();
        time_taken = double(endT - startT) / double(CLOCKS_PER_SEC);
        totalTime += time_taken;
        cout << "time: " << time_taken << fixed << setprecision(5) << " sec" << endl;

// question 15
        int listNumber;
        if (!recommandCars.empty())
        {
            proceed = false;
            while(!proceed){
                cout << "\nYour result is ready! Total time: " << totalTime << fixed << setprecision(5) << " sec" <<"\nHow would you like it to be presented? \n1. Budget (Low to high) 2. Performance(High to low)" << endl;
                cin >> input;
                proceed = checkIndexTwo(input);
                if(proceed){
                    choice = stoi(input);
                }
            }

            int counter = 1;
            string sCounter;


            if (choice == 1)
            {
                sort(recommandCars.begin(), recommandCars.end(), CompareMSRP);
                if (recommandCars.size() > 20)
                {
                    listNumber = 20;
                }
                else 
                {
                    listNumber = recommandCars.size();
                }
                for (int i = 0; i < listNumber; i++)
                {
                    sCounter = to_string(counter) + ".";
                    if (recommandCars.at(i).msrp == -1)
                    {
                        cout << left << setw(5) << sCounter << "$ N/A" << left << setw(4) << " " << recommandCars.at(i).model << endl;
                    }
                    else 
                    {
                        cout << left << setw(5) << sCounter << "$" << left <<  setw(8) << recommandCars.at(i).msrp << recommandCars.at(i).model << endl;
                    }
                    counter++;
                }
            }
            else
            {
                sort(recommandCars.begin(), recommandCars.end(), ComparePower);
                if (recommandCars.size() > 20)
                {
                    listNumber = 20;
                }
                else 
                {
                    listNumber = recommandCars.size();
                }
                for (int i = 0; i < listNumber; i++)
                {
                    sCounter = to_string(counter) + ".";
                    if (recommandCars.at(i).horsepower == -1)
                    {
                        cout << left << setw(5) << sCounter << "N/A" << left << setw(4) <<  recommandCars.at(i).model << endl;
                    }
                    else 
                    {
                        cout << left << setw(5) << sCounter << recommandCars.at(i).horsepower << left << setw(4) << " " << recommandCars.at(i).model << endl;
                    }
                    counter++;
                }
            }
        
        

            bool end = false;
            string endInput;
            proceed = false;
            while(!end)
            {
                while(!proceed)
                {
                    cout << "\nEnter an index for further detail" << endl;
                    cin >> input;
                    proceed = checkValidIntInput(input);
                    if(proceed)
                    {
                        choice = stoi(input);
                        recommandCars.at(choice - 1).printInfo();
                    }
                    

                }
                cout << "\nEnter \"exit\" to exit the program or any input to continue." << endl;
                cin >> endInput;
                if(endInput == "exit")
                {
                    cout << "\nThank you for using EZCAR shopping assistance! I hope you enjoy the experience!" << endl;
                    end = true;
                }
                else
                {
                    proceed = false;
                }
            }
        }
        else 
        {
            cout << "\n\nSorry, we are not able to find a car that meets your expectation." << endl;
        }
    }
    
    
    return 0;
}
