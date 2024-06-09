#include <iostream>
#include <vector>
#include <fstream>
#include "Car.h"
#include "Bus.h"
#include "Motorcycle.h"
#include "Pickups.h"
#include "Truck.h"

using namespace std;

int main() {

    //Read a .TXT file 
    
    ifstream infoFile("info.txt");
    if (infoFile.is_open()) {
        string line;
        while (getline(infoFile, line)) {
            cout << line << endl;
        }}

    
    // Access to all Vehicle objects

    vector<Vehicle*> vehicles;

    vehicles.push_back(new Car(2022, "Tesla", 150, 500, "Model S"));
    vehicles.push_back(new Car(2021, "Honda", 120, 400, "Camry"));
    vehicles.push_back(new Car(2020, "Toyota", 100, 300, "Civic"));

    vehicles.push_back(new Bus(2022, "Volvo", 150, 20, "Volvo Bus"));
    vehicles.push_back(new Bus(2021, "Mercedes", 120, 15, "Merce"));
    vehicles.push_back(new Bus(2020, "BMW", 100, 22, "BMW Bus"));

    vehicles.push_back(new Motorcycle(2023, "Harley-Davidson", 180, true, "Sportster"));
    vehicles.push_back(new Motorcycle(2022, "Yamaha", 160, false, "Fascino"));
    vehicles.push_back(new Motorcycle(2021, "Yamaha", 140, true, "MT15"));

    vehicles.push_back(new Pickups(2024, "Ford", 120, 1500, "F-150"));
    vehicles.push_back(new Pickups(2023, "Chevrolet", 110, 1400, "Silverado"));
    vehicles.push_back(new Pickups(2022, "Toyota", 100, 1300, "Tundra"));

    vehicles.push_back(new Truck(2025, "Mercedes-Benz", 100, 18, "Actros"));
    vehicles.push_back(new Truck(2024, "Ford", 90, 17, "Super Duty"));
    vehicles.push_back(new Truck(2023, "Chevrolet", 80, 5, "Silver"));

    string searchName;
    cout << "Enter the name of the vehicle you want to search: ";
    getline(cin, searchName);

    bool found = false;
    
    for (Vehicle* vehicle : vehicles) {
        if (vehicle->getName() == searchName) {
            cout << "Year: " << vehicle->getYear() << endl;
            cout << "Manufacturer: " << vehicle->getManufacturer() << endl;
            cout << "Speed: " << vehicle->getSpeed() << endl;
            if (Car* car = dynamic_cast<Car*>(vehicle)) {
                cout << car->VehicleInfo(" This is a type of car.") << endl;
            } else if (Bus* bus = dynamic_cast<Bus*>(vehicle)) {
                cout << bus->VehicleInfo(" This is a type of bus.") << endl;
            } else if (Motorcycle* moto = dynamic_cast<Motorcycle*>(vehicle)) {
                cout << moto->VehicleInfo(" This is a type of motorcycle.") << endl;
            } else if (Pickups* pickup = dynamic_cast<Pickups*>(vehicle)) {
                cout << pickup->VehicleInfo(" This is a type of a pickup truck.") << endl;
            } else if (Truck* truck = dynamic_cast<Truck*>(vehicle)) {
                cout << truck->VehicleInfo(" This is a type of a truck.") << endl;
            }
            found = true;
            break;
        }
    }

    // If the name doesn't exist
    if (!found) {
        cout << "Vehicle with name '" << searchName << "' not found." << endl;
    }


    //Operator load
     cout << "Enter the number of the first vehicle you want to compare: ";
     string input1;
     getline(cin, input1);
     int index1 = stoi(input1);

     cout << "Enter the number of the second vehicle you want to compare: ";
     string input2;
     getline(cin, input2);
     int index2 = stoi(input2);

       
if (index1 >= 0 && index1 < vehicles.size() && index2 >= 0 && index2 < vehicles.size()) {
        
    if (*vehicles[index1] >= *vehicles[index2]) {
               cout << vehicles[index1]->getName() << " is faster than or equal to " << vehicles[index2]->getName() << endl;
          
    } else { cout << vehicles[index1]->getName() << " is slower than " << vehicles[index2]->getName() << endl;
           }
    
    } else {
           cout << "Invalid vehicle indices" << endl;
       }

        return 0;
    }

