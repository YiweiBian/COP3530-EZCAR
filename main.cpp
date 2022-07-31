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
int main() {
    vector<Vehicle> vehicles;
    getVehicleData("CarData.csv",vehicles);
    cout << vehicles[0].styleName;
    return 0;
}
