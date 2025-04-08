#pragma once
#include "sphere.h"
#include <string>
using std::string;

class Ball : public Sphere {
public:
    Ball();                                    // Конструктор за замовчуванням
    Ball(double initialRadius, const string initialName); // Конструктор з параметрами

    void getName(string& currentName) const;  // Отримати ім'я (змінено на посилання)
    void setName(const string newName);       // Встановити ім'я
    void resetBall(double newRadius, const string newName); // Скинути параметри
    void displayStatistics() const;           // Перевизначений метод

private:
    string theName; // Поле з іменем м'яча
};
