#include "Vehicle.h"

Vehicle::Vehicle(string manufacturer, int speed, int year, string name) {
    this->manufacturer = manufacturer;
    this->speed = speed;
    this->year = year;
    this->name = name;
}


int Vehicle::getYear() {
    return year;
}

int Vehicle::getSpeed() {
    return speed;
}

string Vehicle::getManufacturer() {
    return manufacturer;
}
string Vehicle::getName() {
    return name;
}