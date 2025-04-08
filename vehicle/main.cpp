#include <iostream>
#include "vehicle.h"
#include "farmequipment.h"
#include "tractor.h"
#include "vehicle.cpp"
#include "farmequipment.cpp"
#include "tractor.cpp"
using namespace std;

int main() {
    Vehicle defaultVehicle; // Транспорт за замовчуванням
    defaultVehicle.displayVehicleInfo();

    FarmEquipment defaultEquipment; // Обладнання за замовчуванням
    defaultEquipment.displayEquipmentInfo();

    Vehicle myVehicle(60, "Gasoline"); // Транспорт із параметрами
    cout << "Speed: " << myVehicle.getMaxSpeed() << " km/h" << endl;
    cout << "\n\n\n" << endl;
    myVehicle.displayVehicleInfo();
    myVehicle.setMaxSpeed(70);
    cout << "Speed: " << myVehicle.getMaxSpeed() << " km/h" << endl;
    myVehicle.displayVehicleInfo();
    cout << "\n\n" << endl;

    Tractor myTractor; // Трактор за замовчуванням
    myTractor.resetTractor(45, 120, "FieldKing");
    myTractor.displayTractorInfo();
    cout << "111111111111111" << endl;

    Vehicle* vehiclePtr = &myTractor; // Вказівник на Tractor як Vehicle
    vehiclePtr->displayVehicleInfo();
    cout << "22222222222" << endl;

    FarmEquipment* equipmentPtr = &myTractor; // Вказівник на Tractor як FarmEquipment
    equipmentPtr->displayEquipmentInfo();

    return 0;
}
