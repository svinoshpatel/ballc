#pragma once
#include "beehive.h"
#include <string>
using std::string;

class HoneyBeehive : public Beehive {
public:
    HoneyBeehive();                                    // Конструктор за замовчуванням
    HoneyBeehive(int bees, double honey, int frames, string status, string hiveName); // Конструктор з параметрами

    void getHiveName(string& currentName) const;      // Отримати ім'я вулика
    void setHiveName(const string newName);           // Встановити ім'я вулика
    void resetHive(int bees, double honey, string newName); // Скинути параметри
    void displayStatus() const;                       // Перевизначений метод

private:
    string hiveName; // Ім'я конкретного вулика
};
