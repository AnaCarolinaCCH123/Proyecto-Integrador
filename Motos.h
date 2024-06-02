#ifndef MOTOS_H
#define MOTOS_H

#include "Vehicle.h"

class Motos: public Vehicle {

private:
    bool Sport;

public:
Motos(int year, string manufacturer, int speed , bool Sport, string name);
int getSport();
void setSport(bool);
string VehicleInfo() override;  
string VehicleInfo(string ExtraInfo); 

};

#endif
