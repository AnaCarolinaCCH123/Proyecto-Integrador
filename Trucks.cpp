#include "Trucks.h"
#include <iostream>

Trucks::Trucks(int year, string manufacturer, int speed, int Wheels, string name)
    : Vehicle (manufacturer, speed, year, name) {
    this->Wheels= Wheels;
}

int  Trucks::getWheels() {
    return Wheels;
}


void Trucks::setWheels(int Wheels) {
    this->Wheels = Wheels;
}

string Trucks:: VehicleInfo (string ExtraInfo) {
    return VehicleInfo() + " " + ExtraInfo + " Has approximately : " + to_string(Wheels) + " wheels";
}

string Trucks::VehicleInfo()
{
return "Trucking is a male-dominated industry with only 6% of all commercial truckers being women"; 
    
}
