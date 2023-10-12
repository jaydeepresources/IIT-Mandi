#include "Node.h"
#include <iostream>

using namespace std;

int main()
{
    Node node1 = Node();
    node1.data = 1;

    cout << node1.data << ", " << node1.next << endl;

    Node node2 = Node();
    node2.data = 2;
    cout << node2.data << ", " << node2.next << endl;

    node1.next = &node2;
    cout << node1.data << ", " << node1.next->data << endl;

    return 0;
}