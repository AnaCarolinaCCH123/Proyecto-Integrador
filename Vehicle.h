#ifndef VEHICLE 
#define VEHICLE
#include <iostream>
#include <string>
using namespace std; 

class Vehicle {
protected:
    int year;
    int speed;
    string manufacturer;
    string name; 

public:

    Vehicle(string manufacturer, int speed, int year, string name);
    int getYear();
    int getSpeed();
    string getManufacturer();
    string getName();
    virtual string VehicleInfo() = 0;
friend bool operator>=(Vehicle &v1, Vehicle &v2);
};

#endif
