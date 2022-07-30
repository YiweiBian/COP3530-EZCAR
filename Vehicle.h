//
// Created by Yiwei Bian on 7/29/22.
//

#include <string>

using namespace std;
struct Vehicle {
    int msrp;
    int cityMPG;
    string engine;
    string drivetrain;
    int passengerCapacity;
    int passengerDoors;
    int curbWeight;
    float fuelCapacity;
    int torque;
    int horsepower;
    float displacement;
    float passengerVolume;
    float wheelbase;
    float trackWidth;
    float overallHeight;
    string transmission;
    int transType;
    int airbags;
    bool brakes;
    bool childSafety;
    bool daytimeLights;
    bool tractionControl;
    bool nightVision;
    bool rolloverProtect;
    bool fogLamps;
    bool parkingAid;
    bool tirePressure;
    bool backCamera;
    bool stabilityControl;
    float turningDiameters;
    string frontWheelMaterial;
    string manufacturer;
    int year;
    string category;
    string frontTireWidth;
    string rimSize;
    string model;
    string torqueOutput;
    string fuelSystem;
    string horsepowerOutput;
    string brakeType;
    string msrpOutput;
    string engineOutput;
    string epa;
    string transmissionOutput;
    string styleName;
    Vehicle(int A, int B, string C, string D, int E, int F, int G, float H, int I, int J, float K, float L,
            float M, float N, float O, string P, int Q, int R, bool S, bool T, bool U, bool V, bool W, bool X,
            bool Y, bool Z, bool AA, bool AB, float AC, string AD, string AE, int AF, string AG, string AH, string AI,
            string AJ, string AK, string AL, string AM, string AN, string AO, string AP, string AQ, string AR,
            string AS){
                this->msrp = A;
                this->cityMPG = B;
                this->engine = C;
                this->drivetrain = D;
                this->passengerCapacity = E;
                this->passengerDoors = F;
                this->curbWeight = G;
                this->fuelCapacity = H;
                this->torque = I;
                this->horsepower = J;
                this->displacement = K;
                this->passengerVolume = L;
                this->wheelbase = M;
                this->trackWidth = N;
                this->overallHeight = O;
                this->transmission = P;
                this->transType = Q;
                this->airbags = R;
                this->brakes = S;
                this->childSafety = T;
                this->daytimeLights = U;
                this->tractionControl = V;
                this->stabilityControl = W;
                this->rolloverProtect = X;
                this->fogLamps = Y;
                this->parkingAid = Z;
                this->tirePressure = AA;
                this->backCamera = AB;

                this->turningDiameters = AC;
                this->frontWheelMaterial = AD;
                this->manufacturer = AE;
                this->year = AF;
                this->category = AG;
                this->frontTireWidth = AH;
                this->rimSize = AI;
                this->model = AJ;
                this->torqueOutput = AK;
                this->fuelSystem = AL;
                this->horsepowerOutput = AM;
                this->brakeType = AN;
                this->msrpOutput = AO;
                this->engineOutput = AP;
                this->epa = AQ;
                this->transmissionOutput = AR;
                this->styleName = AS;
            }
    
};


