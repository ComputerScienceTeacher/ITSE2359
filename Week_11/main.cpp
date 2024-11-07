#include "LinkedList.h"
#include "OrderedLinkedList.h"
#include "DoublyLinkedList.h"
#include "CircularLinkedList.h"

#include<iostream>

using namespace std;

// Main function to test the LinkedList class
int main() {
    CircularLinkedList cList;

    std::cout << "Testing Circular Linked List:" << std::endl;
    cList.insertAtEnd(60);
    cList.insertAtEnd(70);
    cList.insertAtEnd(65);
    cList.insertAtEnd(55);

    std::cout << "Circular Linked List after insertions: ";
    cList.printList();

    return 0;
}
