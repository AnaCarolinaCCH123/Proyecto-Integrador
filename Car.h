#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {

private:
    int powerMotor;

public:
    Car(int year, string manufacturer, int speed , int powerMotor, string name);
int getPowerMotor();
void setPowerMotor(int);
string VehicleInfo() override;  
string VehicleInfo(string ExtraInfo); 

};

#endif 