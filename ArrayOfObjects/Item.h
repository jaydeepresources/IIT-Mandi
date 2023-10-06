#include <iostream>
#include <string>

using namespace std;

class Item
{
private:
    int itemId;
    string itemName;
    float itemPrice;

public:
    Item()
    {
        itemId = 0;
        itemName = "";
        itemPrice = 0;
    }

    Item(int itemId, string itemName, float itemPrice)
    {
        this->itemId = itemId;
        this->itemName = itemName;
        this->itemPrice = itemPrice;
    }

    Item(const Item &item)
    {
        itemId = item.itemId;
        itemName = item.itemName;
        itemPrice = item.itemPrice;
    }

    int getItemId()
    {
        return itemId;
    }

    string getItemName()
    {
        return itemName;
    }

    float getItemPrice()
    {
        return itemPrice;
    }

    void setItemId(int itemId)
    {
        this->itemId = itemId;
    }

    void setItemName(string itemName)
    {
        this->itemName = itemName;
    }

    void setItemPrice(float itemPrice)
    {
        this->itemPrice = itemPrice;
    }

    void printItem()
    {
        cout << "Printing item details" << endl;
        cout << "item id= " << itemId << endl;
        cout << "item name= " << itemName << endl;
        cout << "item price= " << itemPrice << endl;
    }
};