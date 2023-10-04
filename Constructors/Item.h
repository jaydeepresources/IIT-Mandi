#include <iostream>
#include <string>
using namespace std;

class Item
{
private:
    string name;
    float price;

public:
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

    Item(const Item &item)
    {
        name = item.name;
        price = item.price;
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
        this->price = price;
    }

    void printItem()
    {
        cout << "name=" << name << endl;
        cout << "price=" << price << endl;
    }
};