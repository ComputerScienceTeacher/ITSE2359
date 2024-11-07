#include "LinkedListIterator.h"
#include "LinkedList.h"
#include<iostream>

// Definition of begin() - returns an iterator to the start of the list
LinkedListIterator LinkedList::begin() {
    return LinkedListIterator(head);
}

// Definition of end() - returns an iterator pointing to nullptr, marking the end of the list
LinkedListIterator LinkedList::end() {
    return LinkedListIterator(nullptr);
}
