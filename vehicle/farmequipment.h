#pragma once
#include <string>
#include "machine.h"

class FarmEquipment : public Machine {
public:
    FarmEquipment();                                // Конструктор за замовчуванням
    FarmEquipment(int power, std::string purpose);  // Конструктор з параметрами

    void setHorsePower(int power);
    void setPurpose(std::string purpose);
    int getHorsePower() const;
    std::string getPurpose() const;
    void displayEquipmentInfo() const;

protected:
    int horsePower;      // Потужність (кінські сили)
    std::string purpose; // Призначення (наприклад, "Plowing", "Harvesting")
};
