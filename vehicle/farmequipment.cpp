#include "farmequipment.h"
#include <iostream>
using namespace std;

FarmEquipment::FarmEquipment() : horsePower(75), purpose("Plowing") {}

FarmEquipment::FarmEquipment(int power, string purpose) {
    horsePower = (power > 0) ? power : 75;
    this->purpose = (!purpose.empty()) ? purpose : "Plowing";
}

void FarmEquipment::setHorsePower(int power) {
    if (power > 0) horsePower = power;
}

void FarmEquipment::setPurpose(string purpose) {
    if (!purpose.empty()) this->purpose = purpose;
}

int FarmEquipment::getHorsePower() const { return horsePower; }
string FarmEquipment::getPurpose() const { return purpose; }

void FarmEquipment::displayEquipmentInfo() const {
    cout << "\nEquipment Info:"
         << "\nHorse Power: " << horsePower << " hp"
         << "\nPurpose: " << purpose << endl;
}
