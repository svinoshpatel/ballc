#include "honeybeehive.h"
#include <iostream>
using namespace std;

HoneyBeehive::HoneyBeehive() : Beehive() {
    setHiveName("DefaultHive");
}

HoneyBeehive::HoneyBeehive(int bees, double honey, int frames, string status, string name) 
    : Beehive(bees, honey, frames, status) {
    setHiveName(name);
}

void HoneyBeehive::getHiveName(string& currentName) const {
    currentName = hiveName;
}

void HoneyBeehive::setHiveName(const string newName) {
    if (!newName.empty()) hiveName = newName;
}

void HoneyBeehive::resetHive(int bees, double honey, string newName) {
    setBeeCount(bees);
    setHoneyAmount(honey);
    setHiveName(newName);
}

void HoneyBeehive::displayStatus() const {
    cout << "Hive Name = " << hiveName << " :";
    Beehive::displayStatus(); // Виклик методу базового класу
}
