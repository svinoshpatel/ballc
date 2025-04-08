#include "tractor.h"
#include <iostream>
using namespace std;

Tractor::Tractor() : Vehicle(), FarmEquipment() {
    setTractorName("FarmMaster");
}

Tractor::Tractor(int speed, string fuel, int power, string purpose, string name) 
    : Vehicle(speed, fuel), FarmEquipment(power, purpose) {
    setTractorName(name);
}

void Tractor::getTractorName(string& name) const {
    name = tractorName;
}

void Tractor::setTractorName(const string name) {
    if (!name.empty()) tractorName = name;
}

void Tractor::resetTractor(int speed, int power, string name) {
    setMaxSpeed(speed);
    setHorsePower(power);
    setTractorName(name);
}

void Tractor::displayTractorInfo() const {
    cout << "Tractor Name = " << tractorName << " :";
    Vehicle::displayVehicleInfo();
    FarmEquipment::displayEquipmentInfo();
}
