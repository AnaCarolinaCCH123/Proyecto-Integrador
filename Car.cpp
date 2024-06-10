#include "Car.h"
#include <iostream>

Car::Car(int year, string manufacturer, int speed, int powerMotor, string name)
    : Vehicle (manufacturer, speed, year, name) {
    this->powerMotor = powerMotor;
}

int Car::getPowerMotor() {
    return powerMotor;
}


void Car::setPowerMotor(int powerMotor) {
  
}

string Car:: VehicleInfo (string ExtraInfo) {
    return VehicleInfo() + " " + ExtraInfo + " Has a Power Motor of: " + to_string(powerMotor);
}
    
string Car::VehicleInfo()
{
return "Did you know that before the introduction of the wheels, cars were steered by lever!"; 
}
