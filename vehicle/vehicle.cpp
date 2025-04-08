#include "vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle() : maxSpeed(50), fuelType("Diesel") {}

Vehicle::Vehicle(int speed, string fuel) {
    maxSpeed = (speed > 0) ? speed : 50;
    fuelType = (!fuel.empty()) ? fuel : "Diesel";
}

void Vehicle::setMaxSpeed(int speed) {
    if (speed > 0) maxSpeed = speed;
}

void Vehicle::setFuelType(string fuel) {
    if (!fuel.empty()) fuelType = fuel;
}

int Vehicle::getMaxSpeed() const { return maxSpeed; }
string Vehicle::getFuelType() const { return fuelType; }

void Vehicle::displayVehicleInfo() const {
    cout << "\nVehicle Info:"
         << "\nMax Speed: " << maxSpeed << " km/h"
         << "\nFuel Type: " << fuelType << endl;
}
