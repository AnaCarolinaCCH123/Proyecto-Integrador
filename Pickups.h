#ifndef PICKUPS_H
#define PICKUPS_H

#include "Vehicle.h"

class Pickups : public Vehicle {

private:
    float Capacity;

public:
Pickups(int year, string manufacturer, int speed , float Capacity, string name);
int getCapacity();
void setCapacity(float);
string VehicleInfo() override;  
string VehicleInfo(string ExtraInfo); 

};

#endif 