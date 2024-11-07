// LinkedListIterator.h
#ifndef LINKEDLISTITERATOR_H
#define LINKEDLISTITERATOR_H

#include "Node.h"

class LinkedListIterator {
private:
    Node* current;

public:
    LinkedListIterator(Node* start) : current(start) {}

    // Dereference operator to access the data of the current node
    int operator*() const { return current->data; }

    // Prefix increment operator to move to the next node
    LinkedListIterator& operator++() {
        if (current) current = current->next;
        return *this;
    }

    // Inequality operator to compare iterators
    bool operator!=(const LinkedListIterator& other) const {
        return current != other.current;
    }
};




#endif