//
// Created by Yiwei Bian on 7/29/22.
//
#pragma once
#include <string>
#include <iostream>

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
    string engineOutput;
    string epa;
    string transmissionOutput;
    string styleName;
    Vehicle(int A, int B, string C, string D, int E, int F, int G, float H, int I, int J, float K, float L,
            float M, float N, float O, string P, int Q, int R, bool S, bool T, bool U, bool V, bool W, bool X,
            bool Y, bool Z, bool AA, bool AB, float AC, string AD, string AE, int AF, string AG, string AH, string AI,
            string AJ, string AK, string AL, string AM, string AN, string AO, string AP, string AQ, string AR){
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
                this->engineOutput = AO;
                this->epa = AP;
                this->transmissionOutput = AQ;
                this->styleName = AR;
            }
            void printInfo(){
                cout << "\nVehicle Detail\n" << endl;\
                cout << "Model: " << this->model << endl;
                if(this->msrp == -1)
                    cout << "MSRP: N/A" << endl;
                else
                    cout << "MSRP: $" << this->msrp << endl;
                if(this->engineOutput == "-1")
                    cout << "Engine: N/A" << endl;
                else
                    cout << "Engine: " << this->engineOutput << endl;
                if(this->cityMPG == -1)
                    cout << "City Fuel Economy: N/A" << endl;
                else
                    cout << "City Fuel Economy: " << this->cityMPG << " (mpg)" << endl;
                if(this->fuelCapacity == -1)
                    cout << "Fuel Tank Capacity: N/A" << endl;
                else
                    cout << "Fuel Tank Capacity: " << this->fuelCapacity << " (gal)" << endl;
                if(this->transmissionOutput == "-1")
                    cout << "Transmission: N/A" << endl;
                else
                    cout << "Transmission: " << this->transmissionOutput << endl;
                if(this->horsepowerOutput == "-1")
                    cout << "Horsepower: N/A" << endl;
                else
                    cout << "Horsepower: " << this->horsepowerOutput << " (hp)" << endl;
                if(this->torqueOutput == "-1")
                    cout << "Torque: N/A" << endl;
                else
                    cout << "Torque: " << this->torqueOutput << " (N⋅m)" << endl;
                if(this->fuelSystem == "-1")
                    cout << "Fuel System: N/A" << endl;
                else
                    cout << "Fuel System: " << this->fuelSystem << endl;
                if(this->epa == "-1")
                    cout << "EPA Classification: N/A" << endl;
                else
                    cout << "EPA Classification: " << this->epa << endl;
                if(this->passengerCapacity == -1)
                    cout << "Passenger Capacity: N/A" << endl;
                else
                    cout << "Passenger Capacity: " << this->passengerCapacity << endl;

                if(this->passengerDoors == -1)
                    cout << "Passenger Doors: N/A" << endl;
                else
                    cout << "Passenger Doors: " << this->passengerDoors << endl;

                if(this->airbags == -1)
                    cout << "Airbag Number: N/A" << endl;
                else   
                    cout << "Airbag Number: " << airbags << endl;
                cout << "----------------------------------------------------------------------------------------------------\nAdditional Features\n" << endl;
                cout << "\nSafety :" << endl;
                if(this->brakes)
                    cout << "Brakes-ABS  ";
                if(this->childSafety)
                    cout << "Child Safety Rear Door Locks  ";
                if(this->stabilityControl)
                    cout << "Stability Control  ";
                if(this->tractionControl)
                    cout << "Traction Control  ";
                if(this->fogLamps)
                    cout << "Fog Lamps  ";
                if(this->rolloverProtect)
                    cout << "Rollover Protection Bars  ";
                if(this->tirePressure)
                    cout << "Tire Pressure Monitor";
                cout << "\nExterior and Convenience: " << endl;
                if(this->daytimeLights)
                    cout << "Day-time Running Lights  ";
                if(this->parkingAid)
                    cout << "Parking Aid  ";
                if(this->backCamera)
                    cout << "Back-Up Camera";
                cout << endl;
                cout << "----------------------------------------------------------------------------------------------------\nDimensions\n" << endl;
                
                if(this->curbWeight == -1)
                    cout << "Base Curb Weight: N/A" << endl;
                else
                    cout << "Base Curb Weight: " << this->curbWeight << " (lbs)" << endl;

                if(this->passengerVolume == -1)
                    cout << "Passenger Volume: N/A" << endl;
                else
                    cout << "Passenger Volume: " << this->passengerVolume << " (ft³)" << endl;

                if(this->wheelbase == -1)
                    cout << "Wheelbase: N/A" << endl;
                else
                    cout << "Wheelbase: " << this->wheelbase << " (in)" << endl;

                if(this->trackWidth == -1)
                    cout << "Track Width Front: N/A" << endl;
                else
                    cout << "Track Width Front: " << this->trackWidth << " (in)" << endl;

                if(this->overallHeight == -1)
                    cout << "Height Overall: N/A" << endl;
                else
                    cout << "Height Overall: " << this->overallHeight << " (in)" << endl;
                if(this->turningDiameters == -1)
                    cout << "Turning Diameter: N/A" << endl;
                else
                    cout << "Turning Diameter: " << this->turningDiameters << " (ft)" << endl;

                if(this->frontWheelMaterial == "-1")
                    cout << "Front Wheel Material: N/A" << endl;
                else
                    cout << "Front Wheel Material: " << this->frontWheelMaterial << endl;

                if(this->frontTireWidth == "-1")
                    cout << "Front Tire Width: N/A" << endl; 
                else
                    cout << "Front Tire Width: " << this->frontTireWidth << " (mm)" << endl;

                if(this->rimSize == "-1")
                    cout << "Front Tire Rim Size: N/A" << endl;
                else
                    cout << "Front Tire Rim Size: " << this->rimSize << " (in)" << endl;
            }
};



