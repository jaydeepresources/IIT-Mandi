#include <iostream>
#include <string>
using namespace std;

class Item
{
private:
    string name;
    float price;

public:
    string getName()
    {
        return name;
    }

    float getPrice()
    {
        return price;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setPrice(float price)
    {
        // (*this).price = price;
        this->price = price;
    }

    void printItem()
    {
        cout << "name=" << name << endl;
        cout << "price=" << price << endl;
    }
};