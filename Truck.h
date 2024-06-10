#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {

private:
    int Wheels;

public:
Truck(int year, string manufacturer, int speed , int Wheels, string name); 
int getWheels();
void setWheels(int);
string VehicleInfo() override;  
string VehicleInfo(string ExtraInfo); 

};

#endif 
