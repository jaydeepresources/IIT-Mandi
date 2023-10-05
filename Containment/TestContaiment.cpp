#include "Item.h"
#include <string>

int main()
{
    Item item = Item(1, "Pen", 23.5, Category(2, "Stationery"));
    item.printItem();

    Item itemCopy = Item(item);
    itemCopy.printItem();
}