#ifndef TRUCKS_H
#define TRUCKS_H

#include "Vehicle.h"

class Trucks : public Vehicle {

private:
    int Wheels;

public:
Trucks(int year, string manufacturer, int speed , int Wheels, string name); 
int getWheels();
void setWheels(int);
string VehicleInfo() override;  
string VehicleInfo(string ExtraInfo); 

};

#endif 
