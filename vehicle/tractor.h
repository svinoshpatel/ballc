#pragma once
#include "vehicle.h"
#include "farmequipment.h"
#include <string>
using std::string;

class Tractor : public Vehicle, public FarmEquipment {
public:
    Tractor();                                              // Конструктор за замовчуванням
    Tractor(int speed, string fuel, int power, string purpose, string name); // Конструктор з параметрами

    void getTractorName(string& name) const;               // Отримати ім'я трактора
    void setTractorName(const string name);                // Встановити ім'я трактора
    void resetTractor(int speed, int power, string name);  // Скинути параметри
    void displayTractorInfo() const;                       // Вивести всю інформацію

private:
    string tractorName; // Ім'я трактора
};
