#include <iostream>
#include "beehive.h"
#include "honeybeehive.h"
#include "beehive.cpp"
#include "honeybeehive.cpp"
using namespace std;

int main() {
    Beehive defaultHive; // Вулик за замовчуванням
    defaultHive.displayStatus();

    Beehive myHive(5000, 10.5, 8, "Active"); // Вулик з параметрами
    cout << "Honey: " << myHive.getHoneyAmount() << " kg" << endl;
    cout << "\n\n\n" << endl;
    myHive.displayStatus();
    cout << "Honey: " << myHive.getHoneyAmount() << " kg" << endl;
    myHive.collectHoney(3.5); // Збираємо 3.5 кг меду
    cout << "Honey: " << myHive.getHoneyAmount() << " kg" << endl;
    myHive.displayStatus();
    cout << "\n\n" << endl;

    HoneyBeehive myHoneyHive; // Об'єкт класу HoneyBeehive
    myHoneyHive.resetHive(8000, 20.0, "HoneyHaven");
    myHoneyHive.displayStatus();
    cout << "111111111111111" << endl;

    Beehive* hivePtr1 = &myHive; // Вказівник на об'єкт Beehive
    hivePtr1->displayStatus();
    cout << "22222222222" << endl;

    Beehive* hivePtr2 = &myHoneyHive; // Вказівник на об'єкт HoneyBeehive як Beehive
    hivePtr2->displayStatus();

    return 0;
}
