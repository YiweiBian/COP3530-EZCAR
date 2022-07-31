#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <sstream>
#include <regex>
#include <fstream>
#include "Vehicle.h"
#include "Hash.cpp"
using namespace std;
bool checkValidInteger(string input){
    regex constraint = regex("^[0-9]{1,1}$");
    return regex_search(input, constraint);
}
bool checkValidIntInput(string input){
    regex constraint = regex("^[0-9]+$");
    return regex_search(input, constraint);
}

bool checkValidString(string input){
    regex constraint = regex("^[A-Z][a-zA-Z]$");
    return regex_search(input, constraint);
}
bool checkIndexThree(string input){
    regex constraint = regex("^[1-3]{1,1}$");
    return regex_search(input, constraint);
}
bool checkIndexTwo(string input){
    regex constraint = regex("^[1-2]{1,1}$");
    return regex_search(input, constraint);
}
bool checkIndexFive(string input){
    regex constraint = regex("^[1-5]{1,1}$");
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
    cout << "\nWelcome to EZCAR, your personal vehicle shopping assistance!\nThis tool will bring every vehicle that satisfies your needs!\nWe will simply ask several questions, and you will be presented with a list of car that satisfy your needs." << endl;
    
    cout << "\nWhich data structure you want to test?(Entere Index) \n1. Heap  2. HashTable" << endl;
    cin >>  choice;
    if (choice == 1)
    {
            clock_t startT, endT;
    double time_taken;
    double totalTime;
    int dataSize = 30296;
    int choice;
    string input;
    string inputString;

    vector<Vehicle> vehicles;
    getVehicleData("CarData.csv", vehicles);
    cout << "\nWelcome to EZCAR, your personal vehicle shopping assistance!\nThis tool will bring every vehicle that satisfies your needs!\nWe will simply ask several questions, and you will be presented with a list of car that satisfy your needs." << endl;

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
        string input = " ";
        while(input != "exit") {
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
            cout << "What type of car are you looking for?(Enter Index) \n1. Car 2. SUV 3. Pickup 4. Van 5. Any" << endl;
            int type;
            cin >> type;
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
            cout << "sec" << endl;
            cout << " " << endl;
            //budget selection
            cout << "How much are you planning to spend on your car?（Enter ”0” to skip)" << endl;
            int budget;
            cin >> budget;
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
            cout << "sec" << endl;
            cout << " " << endl;


            cout
                    << "What is an ideal year range for your car? \n1. New(2015-2019) 2. Intermediate(2005-2015) 3. Old(before 2005) 4. Any"
                    << endl;

            int year;
            cin >> year;
            start = clock();
            if (year == 1) {
                afteryearSelection = afterbudgetSelection.yearSelection(2019, 2015);
            }
            if (year == 2) {
                afteryearSelection = afterbudgetSelection.yearSelection(2015, 2005);
            }
            if (year == 3) {
                afteryearSelection = afterbudgetSelection.yearSelection(2005, 0);
            }
            end = clock();
            time_taken = double(end - start) / double(CLOCKS_PER_SEC);
            total_time += time_taken;
            cout << "Time taken by this step is: " << fixed << time_taken << setprecision(5);
            cout << "sec" << endl;
            cout << " " << endl;


            cout << "Do you have a preferred brand/manufacturer? (Enter \"skip\" to skip)" << endl;

            string brand;
            cin >> brand;
            start = clock();
            if (brand == "skip") {
                afterbrandSelection = afteryearSelection;
            } else {
                afterbrandSelection = afteryearSelection.brandSelection(brand);
            }
            end = clock();
            time_taken = double(end - start) / double(CLOCKS_PER_SEC);
            total_time += time_taken;
            cout << "Time taken by this step is: " << fixed << time_taken << setprecision(5);
            cout << "sec" << endl;
            cout << " " << endl;

            cout << "Do you have a preferred type of transmission? \n1. Automatic 2. Manual 3. Any" << endl;

            int transmission;
            cin >> transmission;
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
            cout << "sec" << endl;
            cout << " " << endl;


            bool electric = false;

            cout << "Fuel type? \n1. Fully electric 2. Gas/Hybrid" << endl;

            int fuel;
            cin >> fuel;
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
            cout << "sec" << endl;
            cout << " " << endl;

            if (electric) {
                afterpurposetSelection = afterfuelSelection;
            }
            if (!electric) {
                cout
                        << "What's your main purpose of purchasing this vehicle?(Displacement requirement)\n 1. Daily commuting (below 2.0) 2. Performance (2.0 to 3.7) 3. Racing (above 3.7) "
                        << endl;

                int purpose;
                cin >> purpose;
                start = clock();
                if (purpose == 1) {
                    afterpurposetSelection = afterfuelSelection.purposeSelection(2.0, 0);
                }
                if (purpose == 2) {
                    afterpurposetSelection = afterfuelSelection.purposeSelection(3.7, 2.0);
                }
                if (purpose == 3) {
                    afterpurposetSelection = afterfuelSelection.purposeSelection(10000, 3.7);
                }
            }

            end = clock();
            time_taken = double(end - start) / double(CLOCKS_PER_SEC);
            total_time += time_taken;
            cout << "Time taken by this step is: " << fixed << time_taken << setprecision(5);
            cout << "sec" << endl;
            cout << " " << endl;


            cout << "How many passenger seats are you expecting?\n 1. Less than one 2. Two to five 3. More than five"
                 << endl;

            int passenger;
            cin >> passenger;
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
            cout << "sec" << endl;
            cout << " " << endl;


            cout
                    << "Would you want traction control and stability control for safer handling? \n 1. Yes 2. Skip this question"
                    << endl;

            int risk;
            cin >> risk;
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
            cout << "sec" << endl;
            cout << " " << endl;


            cout
                    << "Best protection (above 5 airbags and rollover protect) in case of an accident? 1. Yes 2. Skip this question"
                    << endl;

            int airbags;
            cin >> airbags;
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
            cout << "sec" << endl;
            cout << " " << endl;


            cout << "Will there be a child in this vehicle? \n1. Yes 2. Skip this question" << endl;

            int child;
            cin >> child;
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
            cout << "sec" << endl;
            cout << " " << endl;


            cout << "Do you need a back-up camera? \n1. Yes 2. Skip this question" << endl;

            int camera;
            cin >> camera;
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
            cout << "sec" << endl;
            cout << " " << endl;


            cout << "Parking assistance? \n1. Yes 2. Skip this question" << endl;

            int ass;
            cin >> ass;
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
            cout << "sec" << endl;
            cout << " " << endl;


            cout << "Day-time running lights? \n1. Yes 2. Skip this question" << endl;

            int light;
            cin >> light;
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
            cout << "sec" << endl;
            cout << " " << endl;

            cout
                    << "Your result is ready! How would you like it to be presented? \n1. Budget (Low to high) 2. Performance(High to low)"
                    << endl;
            int price;
            vector<Vehicle> result;
            cin >> price;
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
            cout << "sec" << endl;
            cout << " " << endl;

            if (result.size() != 0) {
                start = clock();
                cout << "Enter an index for further detail" << endl;
                int index;
                cin >> index;
                for (int i = 0; i < result.size(); i++) {
                    if (i == index) {
                        result[i].printInfo();
                        break;
                    } else {
                        continue;
                    }
                }
                end = clock();
                time_taken = double(end - start) / double(CLOCKS_PER_SEC);
                total_time += time_taken;
                cout << "Time taken by this step is: " << fixed << time_taken << setprecision(5);
                cout << "sec" << endl;
            }

            cout << " " << endl;
            cout << "Total time taken by this execution is: " << fixed << total_time << setprecision(5);
            cout << "sec" << endl;
            cout << " " << endl;
            cout << "Enter \"exit\" to exit the program or any input to continue." << endl;
            cin >> input;
        }

        cout << "Thank you for using EZCAR shopping assistance! I hope you enjoy the experience!" << endl;

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
            cout << "What type of car are you looking for?(Enter Index) \n1. Car 2. SUV 3. Pickup 4. Van 5. Any" << endl;
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
        cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

// question 2
        proceed = false;
        while(!proceed)
        {
            cout << "How much are you planning to spend on this vehicle? (Enter \"0\" to skip)" << endl;
            cin >> input;
            proceed = checkValidIntInput(input);
            if(proceed){
                choice = stoi(input);
            }
        }

        startT = clock();
        Hash q3(q2.getSize());
        table = q2.getTable();

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
        endT = clock();
        time_taken = double(endT - startT) / double(CLOCKS_PER_SEC);
        totalTime += time_taken;
        cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

// question 3
        proceed = false;
        while(!proceed){
            cout << "What is an ideal year range for your car? \n1. New(2015-2019) 2. Intermediate(2005-2015) 3. Old(before 2005) 4. Any" << endl;
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
                    if (j.year <= 2015 && j.year >= 2005)
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
        cout << "time: " << time_taken << setprecision(5) << " sec" << endl;


// question 4
        proceed = false;
        while(!proceed)
        {
            cout << "Do you have a preferred brand/manufacturer? (Enter \"Skip\" to skip)" << endl;
            cin >> input;
            proceed = checkValidString(input);
        }

        startT = clock();
        Hash q5(q4.getSize());

        temp = q4.searchItem(input);
        for (auto i : temp)
        {
            if (i.manufacturer == input)
            {
                q5.insertItem(i, i.transmission);
            }
        }
        endT = clock();
        time_taken = double(endT - startT) / double(CLOCKS_PER_SEC);
        totalTime += time_taken;
        cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

// question 5
        proceed = false;
        while(!proceed)
        {
            cout << "Do you have a preferred type of transmission? \n1. Automatic 2. Manual 3. Any" << endl;
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
        cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

// question 6
        proceed = false;
        while(!proceed){
            cout << "Fuel type? \n1. Fully electric 2. Gas/Hybrid" << endl;
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
        cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

// question 7
        proceed = false;
        while(!proceed){
            cout << "What's your main purpose of purchasing this vehicle?(Displacement requirement)\n 1. Daily commuting (below 2.0) 2. Performance (2.0 to 3.7) 3. Racing (above 3.7) " << endl;
            cin >> input;
            proceed = checkIndexThree(input);
            if(proceed){
                choice = stoi(input);
            }
        }

        startT = clock();
        Hash q8(q7.getSize());

        if (choice == 1)
        {
            temp = q7.searchItem(1);
            for (auto i : temp)
            {
                q8.insertItem(i, i.passengerCapacity);
            }

        }
        else if (choice == 2)
        {
            temp = q7.searchItem(2);
            for (auto i : temp)
            {
                q8.insertItem(i, i.passengerCapacity);
            }
            temp = q7.searchItem(3);
            for (auto i : temp)
            {
                if (i.displacement <= 3.7)
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
                q8.insertItem(i, i.passengerCapacity);
            }
        }
        endT = clock();
        time_taken = double(endT - startT) / double(CLOCKS_PER_SEC);
        totalTime += time_taken;
        cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

// question 8
        proceed = false;
        while(!proceed){
            cout << "How many passenger seats are you expecting?\n 1. Less than one 2. Two to five 3. More than five" << endl;
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
        cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

//question 9
        proceed = false;
        while(!proceed){
            cout << "Would you want traction control and stability control for safer handling? \n 1. Yes 2. Skip this question" << endl;
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
        cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

// question 10
        proceed = false;
        while(!proceed){
            cout << "Best protection (above 5 airbags and rollover protect) in case of an accident? 1. Yes 2. Skip this question" << endl;
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
        cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

// question 11
        proceed = false;
        while(!proceed){
            cout << "Will there be a child in this vehicle? \n1. Yes 2. Skip this question" << endl;
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
        cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

// question 12
        proceed = false;
        while(!proceed){
            cout << "Do you need a back-up camera? \n1. Yes 2. Skip this question" << endl;
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
        cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

// question 13
        proceed = false;
        while(!proceed){
            cout << "Parking assistance? \n1. Yes 2. Skip this question" << endl;
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
        cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

// question 14
        proceed = false;
        while(!proceed){
            cout << "Day-time running lights? \n1. Yes 2. Skip this question" << endl;
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
        cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

// question 15
        proceed = false;
        while(!proceed){
            cout << "Your result is ready! Total time: " << totalTime << setprecision(5) << " sec" <<"\nHow would you like it to be presented? \n1. Budget (Low to high) 2. Performance(High to low)" << endl;
            cin >> input;
            proceed = checkIndexTwo(input);
            if(proceed){
                choice = stoi(input);
            }
        }

        int counter = 1;


        if (choice == 1)
        {
            sort(recommandCars.begin(), recommandCars.end(), CompareMSRP);
            for (auto i: recommandCars)
            {
                cout << counter++ << ". $" << i.msrp << "  " << i.model << endl;

            }
        }
        else
        {
            sort(recommandCars.begin(), recommandCars.end(), ComparePower);
            for (auto i: recommandCars)
            {
                cout << counter++ << ". " << i.horsepower << "  " << i.model << endl;
            }
        }

        bool end = false;
        string endInput;
        proceed = false;
        while(!end)
        {
            while(!proceed)
            {
                cout << "Enter an index for further detail" << endl;
                cin >> input;
                proceed = checkValidIntInput(input);
                if(proceed)
                {
                    choice = stoi(input);
                }
                vehicles.at(choice - 1).printInfo();

            }
            cout << "Enter \"exit\" to exit the program or any input to continue." << endl;
            cin >> endInput;
            if(endInput == "exit")
            {
                cout << "Thank you for using EZCAR shopping assistance! I hope you enjoy the experience!" << endl;
                end = true;
            }
            else
            {
                proceed = false;
            }
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
        cout << "What type of car are you looking for?(Enter Index) \n1. Car 2. SUV 3. Pickup 4. Van 5. Any" << endl;
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
    cout << "time: " << time_taken << setprecision(5) << " sec" << endl;
   
// question 2
    proceed = false;
    while(!proceed)
    {
        cout << "How much are you planning to spend on this vehicle? (Enter \"0\" to skip)" << endl;
        cin >> input;
        proceed = checkValidIntInput(input);
        if(proceed){
            choice = stoi(input);
        }
    }

    startT = clock();
    Hash q3(q2.getSize());
    table = q2.getTable();

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
    endT = clock();
    time_taken = double(endT - startT) / double(CLOCKS_PER_SEC);
    totalTime += time_taken;
    cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

// question 3
    proceed = false;
    while(!proceed){
        cout << "What is an ideal year range for your car? \n1. New(2015-2019) 2. Intermediate(2005-2015) 3. Old(before 2005) 4. Any" << endl;
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
                if (j.year <= 2015 && j.year >= 2005)
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
    cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

 
// question 4
    proceed = false;
    while(!proceed)
    {
        cout << "Do you have a preferred brand/manufacturer? (Enter \"Skip\" to skip)" << endl;
        cin >> input;
        proceed = checkValidString(input);
    }

    startT = clock();
    Hash q5(q4.getSize());

    temp = q4.searchItem(input);
    for (auto i : temp)
    {
        if (i.manufacturer == input)
        {
            q5.insertItem(i, i.transmission);
        }
    }
    endT = clock();
    time_taken = double(endT - startT) / double(CLOCKS_PER_SEC);
    totalTime += time_taken;
    cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

// question 5
    proceed = false;
    while(!proceed)
    {
        cout << "Do you have a preferred type of transmission? \n1. Automatic 2. Manual 3. Any" << endl;
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
    cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

// question 6
    proceed = false;
    while(!proceed){
        cout << "Fuel type? \n1. Fully electric 2. Gas/Hybrid" << endl;
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
    cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

// question 7
    proceed = false;
    while(!proceed){
        cout << "What's your main purpose of purchasing this vehicle?(Displacement requirement)\n 1. Daily commuting (below 2.0) 2. Performance (2.0 to 3.7) 3. Racing (above 3.7) " << endl;
        cin >> input;
        proceed = checkIndexThree(input);
        if(proceed){
            choice = stoi(input);
        }
    }

    startT = clock();  
    Hash q8(q7.getSize());

    if (choice == 1)
    {
        temp = q7.searchItem(1);
        for (auto i : temp)
        {
            q8.insertItem(i, i.passengerCapacity);
        }
        
    }
    else if (choice == 2)
    {
        temp = q7.searchItem(2);
        for (auto i : temp)
        {
            q8.insertItem(i, i.passengerCapacity);
        }
        temp = q7.searchItem(3);
        for (auto i : temp)
        {
            if (i.displacement <= 3.7)
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
            q8.insertItem(i, i.passengerCapacity);
        }
    }
    endT = clock();
    time_taken = double(endT - startT) / double(CLOCKS_PER_SEC);
    totalTime += time_taken;
    cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

// question 8
    proceed = false;
    while(!proceed){
        cout << "How many passenger seats are you expecting?\n 1. Less than one 2. Two to five 3. More than five" << endl;
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
    cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

//question 9
    proceed = false;
    while(!proceed){
        cout << "Would you want traction control and stability control for safer handling? \n 1. Yes 2. Skip this question" << endl;
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
    cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

// question 10
    proceed = false;
    while(!proceed){
        cout << "Best protection (above 5 airbags and rollover protect) in case of an accident? 1. Yes 2. Skip this question" << endl;
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
    cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

// question 11
    proceed = false;
    while(!proceed){
        cout << "Will there be a child in this vehicle? \n1. Yes 2. Skip this question" << endl;
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
    cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

// question 12
    proceed = false;
    while(!proceed){
        cout << "Do you need a back-up camera? \n1. Yes 2. Skip this question" << endl;
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
    cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

// question 13
    proceed = false;
    while(!proceed){
        cout << "Parking assistance? \n1. Yes 2. Skip this question" << endl;
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
    cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

// question 14
    proceed = false;
    while(!proceed){
        cout << "Day-time running lights? \n1. Yes 2. Skip this question" << endl;
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
    cout << "time: " << time_taken << setprecision(5) << " sec" << endl;

// question 15
    proceed = false;
    while(!proceed){
        cout << "Your result is ready! Total time: " << totalTime << setprecision(5) << " sec" <<"\nHow would you like it to be presented? \n1. Budget (Low to high) 2. Performance(High to low)" << endl;
        cin >> input;
        proceed = checkIndexTwo(input);
        if(proceed){
            choice = stoi(input);
        }
    }

    int counter = 1;

    
    if (choice == 1)
    {
        sort(recommandCars.begin(), recommandCars.end(), CompareMSRP);
        for (auto i: recommandCars)
        {   
            cout << counter++ << ". $" << i.msrp << "  " << i.model << endl;
                
        }
    }
    else 
    {
        sort(recommandCars.begin(), recommandCars.end(), ComparePower);
        for (auto i: recommandCars)
        {
            cout << counter++ << ". " << i.horsepower << "  " << i.model << endl;
        }
    }

    bool end = false;
    string endInput;
    proceed = false;
    while(!end)
    {
        while(!proceed)
        {
            cout << "Enter an index for further detail" << endl;
            cin >> input;
            proceed = checkValidIntInput(input);
            if(proceed)
            {
                choice = stoi(input);
            }
            vehicles.at(choice - 1).printInfo();
           
        }
        cout << "Enter \"exit\" to exit the program or any input to continue." << endl;
        cin >> endInput;
        if(endInput == "exit")
        {
            cout << "Thank you for using EZCAR shopping assistance! I hope you enjoy the experience!" << endl;
            end = true;
        }
        else
        {
            proceed = false;
        }
    }
    }
    
    return 0;
}
