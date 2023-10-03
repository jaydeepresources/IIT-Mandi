#include "Item.h"
#include <string>

int main()
{
    // Explicit
    // Item item1 = Item();

    // Implicit
    // Item item2;

    // Constructor invokation without reference to the object created
    // Item();

    // instantly use the created object without referring to it; however access to
    // the object is lost after the current line
    // Item().printItem();

    // Using Default Constructor
    // Item item = Item();
    // item.setName("Pen");
    // item.setPrice(23.44);
    // item.printItem();

    // Using Parameterized Constructor
    Item item = Item("Pen", 23.44);
    item.printItem();
}
/*

Overloading, difference must exist at least one :-

1. Number of params
2. Type of params
3. Sequence of params

*/