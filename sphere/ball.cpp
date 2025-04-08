#include "ball.h"
#include <iostream>
using namespace std;

Ball::Ball() : Sphere() {
    setName("FootBall");
}

Ball::Ball(double initialRadius, const string initialName) : Sphere(initialRadius) {
    setName(initialName);
}

void Ball::getName(string& currentName) const {  // Змінено на передачу за посиланням
    currentName = theName;
}

void Ball::setName(const string newName) {  // Виправлено "specificity" на "setName"
    if (!newName.empty()) theName = newName;
}

void Ball::resetBall(double newRadius, const string newName) {
    setRadius(newRadius);
    setName(newName);
}

void Ball::displayStatistics() const {
    cout << "Object Name = " << theName << " :";
    Sphere::displayStatistics(); // Виклик методу базового класу
}
