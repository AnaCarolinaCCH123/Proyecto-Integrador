#include "Motorcycle.h"
#include <iostream>

Motorcycle::Motorcycle(int year, string manufacturer, int speed, bool Sport, string name)
    : Vehicle (manufacturer, speed, year, name) {
    this->Sport = Sport;
}

int Motorcycle::getSport() {
    return Sport;
}


void Motorcycle::setSport(bool Sport) {
    this->Sport = Sport;
}

string Motorcycle:: VehicleInfo (string ExtraInfo) {
    return VehicleInfo() + " " + ExtraInfo + "Is a sport motorcycle: " + to_string(Sport);
}

string Motorcycle::VehicleInfo()
{
return "Did you know that the world's most expensive motorcycle costs $360,000"; 
}
