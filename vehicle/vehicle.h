#pragma once
#include <string>

class Vehicle {
public:
    Vehicle();                              // Конструктор за замовчуванням
    Vehicle(int speed, std::string fuel);   // Конструктор з параметрами

    void setMaxSpeed(int speed);
    void setFuelType(std::string fuel);
    int getMaxSpeed() const;
    std::string getFuelType() const;
    void displayVehicleInfo() const;

protected:
    int maxSpeed;        // Максимальна швидкість (км/год)
    std::string fuelType; // Тип палива (наприклад, "Diesel", "Gasoline")
};
