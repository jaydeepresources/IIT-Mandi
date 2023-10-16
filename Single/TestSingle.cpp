#include <iostream>
#include "Car.h"
using namespace std;

int main()
{
    Car c1;

    cout << "Enter name, color, top speed and transmission type" << endl;
    cin >> c1.name;
    cin >> c1.color;
    cin >> c1.topSpeed;
    cin >> c1.transmission;

    c1.print();
    c1.start();

    // Vehicle v1;
    // v1.start();

    return 0;
}

// Child = Child + Vehicle : TRUE