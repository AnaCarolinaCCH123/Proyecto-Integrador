#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"

class Bus : public Vehicle {

private:
    int cantPassengers;

public:
    Bus(int year, string manufacturer, int speed , int cantPassengers, string name);
int getcantPassengers();
void setcantPassengers(int);
string VehicleInfo() override;  
string VehicleInfo(string ExtraInfo); 

};

#endif 