#include "LinkedList.h"
#include <iostream>

using namespace std;

int main()
{
    LinkedList list = LinkedList();
    list.addNode(Node(1), 2, 0);
    list.addNode(Node(4), 2, 0);
    list.addNode(Node(5), 2, 0);
    list.addNode(Node(9), 1, 0);
    list.addNode(Node(6), 3, 4);
    // list.addNode(Node(16), 3, 14);
    // 9--1--4--6--5
    list.display();

    list.deleteNode(5);
    list.display();

    return 0;
}