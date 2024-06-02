#include "Motos.h"
#include <iostream>

Motos::Motos(int year, string manufacturer, int speed, bool Sport, string name)
    : Vehicle (manufacturer, speed, year, name) {
    this->Sport = Sport;
}

int Motos::getSport() {
    return Sport;
}


void Motos::setSport(bool Sport) {
    this->Sport = Sport;
}

string Motos:: VehicleInfo (string ExtraInfo) {
    return VehicleInfo() + " " + ExtraInfo + "Is a sport motorcycle: " + to_string(Sport);
}

string Motos::VehicleInfo()
{
return "Did you know that the world's most expensive motorcycle costs $360,000"; 
}
