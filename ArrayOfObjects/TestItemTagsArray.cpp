#include "ItemTags.h"
#include <string>

int main()
{
    // Create an array of items
    Item items[3];

    cout << "Entering details for items" << endl;
    for (int i = 0; i < 3; i++)
    {
        int itemId = 0;
        string itemName = "";
        float itemPrice = 0;
        string tags[] = {"", "", "", "", ""};
        cout << "Enter details for item: " << (i + 1) << endl;
        cout << "Enter id, name and price" << endl;
        cin >> itemId >> itemName >> itemPrice;
        items[i].setItemId(itemId);
        items[i].setItemName(itemName);
        items[i].setItemPrice(itemPrice);
        cout << "Enter 5 tags" << endl;
        for (int i = 0; i < 5; i++)
            cin >> tags[i];

        items[i].setItemTags(tags);
    }

    cout << "Printing details for items" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Printing details for item: " << (i + 1) << endl;
        items[i].printItem();
    }
}