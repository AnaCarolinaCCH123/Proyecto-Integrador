#include "Truck.h"
#include <iostream>

Truck::Truck(int year, string manufacturer, int speed, int Wheels, string name)
    : Vehicle (manufacturer, speed, year, name) {
    this->Wheels= Wheels;
}

int  Truck::getWheels() {
    return Wheels;
}


void Truck::setWheels(int Wheels) {
    this->Wheels = Wheels;
}

string Truck:: VehicleInfo (string ExtraInfo) {
    return VehicleInfo() + " " + ExtraInfo + " Has approximately : " + to_string(Wheels) + " wheels";
}

string Truck::VehicleInfo()
{
return "Trucking is a male-dominated industry with only 6% of all commercial truckers being women"; 
    
}
