//LinkedList.h
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include "LinkedListIterator.h" // Forward declaration for LinkedListIterator

class LinkedList {
protected:
    Node* head;   // Pointer to the first node in the list

public:
    LinkedList() : head(nullptr) {} // Constructor initializes an empty list

    // Declare functions for common operations
    void insertAtBeginning(int newData);
    void insertAtEnd(int newData);
    bool search(int target);
    void printList();

    // Iterator functions
    LinkedListIterator begin();
    LinkedListIterator end();

    // Make LinkedListIterator a friend class to access private members
    friend class LinkedListIterator;
};

#endif