#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"

class Motorcycle: public Vehicle {

private:
    bool Sport;

public:
Motorcycle(int year, string manufacturer, int speed , bool Sport, string name);
int getSport();
void setSport(bool);
string VehicleInfo() override;  
string VehicleInfo(string ExtraInfo); 

};

#endif
