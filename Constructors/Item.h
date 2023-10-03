#include <iostream>
#include <string>
using namespace std;

class Item
{
private:
    string name;
    float price;

public:
    // name same as class name
    // no return types
    // invoked automatically every time obj is created

    Item()
    {
        cout << "Object created at: " << this << endl;
        name = "";
        price = 0.0;
    }

    Item(string name, float price)
    {
        this->name = name;
        this->price = price;
    }

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