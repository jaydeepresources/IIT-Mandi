#include <iostream>
#include "Node.h"

using namespace std;

class LinkedList
{
public:
    Node *head;
    Node *tail;

    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void addNode(Node newNode, int position, int data)
    {
        Node *current = NULL;
        if (head == NULL)
        {
            head = &newNode;
            tail = &newNode;
            return;
        }

        switch (position)
        {
        case 1:
            newNode.next = head;
            head = &newNode;
            break;

        case 2:
            tail->next = &newNode;
            tail = &newNode;
            break;

        case 3:

            current = head;
            while (current != NULL)
            {
                if (current->data == data)
                {
                    newNode.next = current->next;
                    current->next = &newNode;
                    return;
                }
                else
                {
                    current = current->next;
                }
            }
            cout << "Node not found" << endl;
            break;
        }
    }

    void deleteNode(int data)
    {
        Node *current = head;
        Node *prev = NULL;

        while (current != NULL)
        {
            if (current->data == data)
            {
                if (current == head)
                {
                    head = current->next;
                }
                else if (current == tail)
                {
                    tail = prev;
                    tail->next = NULL;
                }
                else
                {
                    prev->next = current->next;
                }
                break;
            }
            else
            {
                prev = current;
                current = current->next;
            }
        }
    }

    void display()
    {
        Node *current = head;

        if (head == NULL)
        {
            cout << "The Linked List is empty." << endl;
            return;
        }

        cout << "Linked List:" << endl;
        while (current != NULL)
        {
            cout << "Data=" << current->data << endl;
            if (current->next == NULL)
                cout << "Next=NULL" << endl;
            else
                cout << "Next=" << current->next->data << endl;
            current = current->next;
        }
    }
};