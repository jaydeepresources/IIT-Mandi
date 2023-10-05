#include <iostream>
#include <string>
#include "Category.h"

using namespace std;

class Item
{
private:
    int itemId;
    string itemName;
    float itemPrice;
    Category itemCategory;

public:
    Item()
    {
        itemId = 0;
        itemName = "";
        itemPrice = 0;
        itemCategory = Category();
    }

    Item(int itemId, string itemName, float itemPrice, Category itemCategory)
    {
        this->itemId = itemId;
        this->itemName = itemName;
        this->itemPrice = itemPrice;
        this->itemCategory = itemCategory;
    }

    Item(const Item &item)
    {
        itemId = item.itemId;
        itemName = item.itemName;
        itemPrice = item.itemPrice;
        itemCategory = item.itemCategory;
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

    Category getItemCategory()
    {
        return itemCategory;
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

    void setItemCategory(Category itemCategory)
    {
        this->itemCategory = itemCategory;
    }

    void printItem()
    {
        cout << "Printing item details" << endl;
        cout << "item id= " << itemId << endl;
        cout << "item name= " << itemName << endl;
        cout << "item price= " << itemPrice << endl;

        cout << "Printing category details" << endl;
        itemCategory.printCategory();
    }
};