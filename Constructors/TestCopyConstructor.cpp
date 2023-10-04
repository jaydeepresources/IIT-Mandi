#include "Item.h"
#include <string>

int main()
{

    Item i1 = Item("Pen", 25.66);
    Item i2 = Item(i1);

    // Both objects are unique
    cout << "i1 = " << &i1 << endl;
    cout << "i2 = " << &i2 << endl;

    i1.printItem();
    i2.printItem();
}