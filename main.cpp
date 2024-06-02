#include <vector>
#include "Car.h"
#include "Bus.h"
#include "Motos.h"
#include "Pickups.h"
#include "Trucks.h"

using namespace std;

int main() {
    // Access to Car objects
    vector<Car*> cars;

    cars.push_back(new Car(2022, "Tesla", 150, 500, "Model S"));
    cars.push_back(new Car(2021, "Honda", 120, 400, "Camry"));
    cars.push_back(new Car(2020, "Toyota", 100, 300, "Civic"));

    // Access to Bus Objects 
    vector<Bus*> buses;
    buses.push_back(new Bus(2022, "Volvo", 150, 20, "Volvo Bus"));
    buses.push_back(new Bus(2021, "Mercedes", 120, 15, "Merce"));
    buses.push_back(new Bus(2020, "BMW", 100, 22, "BMW Bus")); 
    

    // Access to Motos Objects
    vector<Motos*> motos;
    motos.push_back(new Motos(2023, "Harley-Davidson", 180, true, "Sportster"));
    motos.push_back(new Motos(2022, "Yamaha", 160, false, "Fascino"));
    motos.push_back(new Motos(2021, "Yamaha", 140, true, "MT15")); 

    // Access to Pickups Objects
    vector<Pickups*> pickups;
    pickups.push_back(new Pickups(2024, "Ford", 120, 1500, "F-150"));
    pickups.push_back(new Pickups(2023, "Chevrolet", 110, 1400, "Silverado")); 
    pickups.push_back(new Pickups(2022, "Toyota", 100, 1300, "Tundra"));

    // Access to Trucks Objects
    vector<Trucks*> trucks;
    trucks.push_back(new Trucks(2025, "Mercedes-Benz", 100, 18, "Actros"));
    trucks.push_back(new Trucks(2024, "Ford", 90, 17, "Super Dty")); 
    trucks.push_back(new Trucks(2023, "Chevrolet", 80, 5 , "Silverado"));
        

    // Search for a car by name
    string searchName;
    cout << "Enter the name of the vehicle you want to search: ";
    getline(cin, searchName);

    bool found = false;
    // Search in Cars
    for (Car* car : cars) {
        if (car->getName() == searchName ) {
            cout << "Year: " << car->getYear() << endl;
            cout << "Manufacturer: " << car->getManufacturer() << endl;
            cout << "Speed: " << car->getSpeed() << endl;
            cout << car->VehicleInfo(" This is a type of car.") << endl;
            found = true;
            break;
        }
    }
    // Search in Buses
    if (!found) {
        for (Bus* bus : buses) {
            if (bus->getName() == searchName) {
                cout << "Year: " << bus->getYear() << endl;
                cout << "Manufacturer: " << bus->getManufacturer() << endl;
                cout << "Speed: " << bus->getSpeed() << endl;
                cout << bus->VehicleInfo(" This is a type ofbus.") << endl;
                found = true;
                break;
            }
        }
    }
    // Search in Motos
    if (!found) {
        for (Motos* moto : motos) {
            if (moto->getName() == searchName) {
                cout << "Year: " << moto->getYear() << endl;
                cout << "Manufacturer: " << moto->getManufacturer() << endl;
                cout << "Speed: " << moto->getSpeed() << endl;
                cout << moto->VehicleInfo(" This is a type of motorcycle.") << endl;
                found = true;
                break;
            }
        }
    }
    // Search in Pickups
    if (!found) {
        for (Pickups* pickup : pickups) {
            if (pickup->getName() == searchName) {
                cout << "Year: " << pickup->getYear() << endl;
                cout << "Manufacturer: " << pickup->getManufacturer() << endl;
                cout << "Speed: " << pickup->getSpeed() << endl;
                cout << pickup->VehicleInfo(" This is a type of a pickup truck.") << endl;
                found = true;
                break;
            }
        }
    }
    // Search in Trucks
    if (!found) {
        for (Trucks* truck : trucks) {
            if (truck->getName() == searchName) {
                cout << "Year: " << truck->getYear() << endl;
                cout << "Manufacturer: " << truck->getManufacturer() << endl;
                cout << "Speed: " << truck->getSpeed() << endl;
                cout << truck->VehicleInfo(" This is a type of a truck.") << endl;
                found = true;
                break;}
                                    }
                }
    //If the name doesn´t match any of the vehicles, it will print the following message
    if (!found) {
        cout << "Vehicle with name '" << searchName << "' not found." << endl;
    }

    return 0;
    }

