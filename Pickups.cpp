#include "Pickups.h"
#include <iostream>

Pickups::Pickups(int year, string manufacturer, int speed, float Capacity, string name)
    : Vehicle (manufacturer, speed, year, name) {
    this->Capacity = Capacity;
}

int Pickups::getCapacity() {
    return Capacity;
}


void Pickups::setCapacity(float Capacity) {
    this->Capacity = Capacity;
}

string Pickups:: VehicleInfo (string ExtraInfo) {
    return VehicleInfo() + " " + ExtraInfo + " Has a load capacity of: " + to_string(Capacity);
}

string Pickups::VehicleInfo()
{
return "Did you know that the first truck was invented in 1896"; 
}
