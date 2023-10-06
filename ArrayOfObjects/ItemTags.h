#include <iostream>
#include <string>

using namespace std;

class Item
{
private:
    int itemId;
    string itemName;
    float itemPrice;
    string tags[5];

public:
    Item()
    {
        itemId = 0;
        itemName = "";
        itemPrice = 0;
    }

    Item(int itemId, string itemName, float itemPrice, string tags[])
    {
        this->itemId = itemId;
        this->itemName = itemName;
        this->itemPrice = itemPrice;
        for (int i = 0; i < 5; i++)
        {
            this->tags[i] = tags[i];
        }
    }

    Item(const Item &item)
    {
        itemId = item.itemId;
        itemName = item.itemName;
        itemPrice = item.itemPrice;
        for (int i = 0; i < 5; i++)
        {
            tags[i] = item.tags[i];
        }
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

    string *getItemTags()
    {
        return tags;
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

    void setItemTags(string tags[])
    {
        for (int i = 0; i < 5; i++)
        {
            this->tags[i] = tags[i];
        }
    }

    void printItem()
    {
        cout << "Printing item details" << endl;
        cout << "item id= " << itemId << endl;
        cout << "item name= " << itemName << endl;
        cout << "item price= " << itemPrice << endl;
        cout << "item tags= " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << tags[i] << endl;
        }
    }
};