#include "Item.h"
#include <string>

int main()
{
    Item item; // calls item as this

    item.setName("Pen");
    item.setPrice(50.55);

    cout << "name from getter: " << item.getName() << endl;

    item.printItem();
}