#include <iostream>
#include "sphere.h"
#include "ball.h"
#include "sphere.cpp"
#include "ball.cpp"
using namespace std;

int main() {
    Sphere unitSphere; // Радіус 1.0
    unitSphere.displayStatistics();

    Sphere mySphere(5.1); // Радіус 5.1
    cout << "d=" << mySphere.getDiameter() << endl;
    cout << "\n\n\n" << endl;
    mySphere.displayStatistics();
    cout << "d=" << mySphere.getDiameter() << endl;
    mySphere.setRadius(4.2); // Зміна радіуса на 4.2
    cout << "d=" << mySphere.getDiameter() << endl;
    mySphere.displayStatistics();
    cout << "\n\n" << endl;

    Ball myBall; // Об'єкт класу Ball
    myBall.resetBall(30.5, "My_Footbol");
    myBall.displayStatistics();
    cout << "111111111111111" << endl;

    Sphere* spherePtr1 = &mySphere; // Вказівник на об'єкт Sphere
    spherePtr1->displayStatistics();
    cout << "22222222222" << endl;

    Sphere* spherePtr2 = &myBall; // Вказівник на об'єкт Ball як Sphere
    spherePtr2->displayStatistics();

    return 0;
}
