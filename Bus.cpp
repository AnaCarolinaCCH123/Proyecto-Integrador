#include "Bus.h"
#include <iostream>

Bus::Bus(int year, string manufacturer, int speed, int cantPassengers, string name)
    : Vehicle (manufacturer, speed, year, name) {
    this->cantPassengers = cantPassengers;
}

int Bus::getcantPassengers() {
    return cantPassengers;
}


void Bus::setcantPassengers(int cantPassengers) {
    this->cantPassengers = cantPassengers;
}

string Bus:: VehicleInfo (string ExtraInfo) {
    return VehicleInfo() + " " + ExtraInfo + " Can carry up to: " + to_string(cantPassengers) + " passengers";
}

string Bus::VehicleInfo()
{
return "Did you know that the word bus comes from 'omnibus' is derived from Latin, meaning for all "; 
}
