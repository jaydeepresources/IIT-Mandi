#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle
{

public:
    string transmission;

    void print()
    {
        Vehicle::print(); // NOT A RULE !
        cout << "Transmission= " << transmission << endl;
    }

    void start()
    {
        cout << "The Car engine starts in a different way than other vehicles." << endl;
    }
};