#include <iostream>
#include "LinkedList.h"
using namespace std;

// Insert a new node at the beginning of the list
void LinkedList::insertAtBeginning(int newData) {
    Node* newNode = new Node();  // Create a new node
    newNode->data = newData;     // Set the data for the new node
    newNode->next = head;        // Link the new node to the current head
    head = newNode;              // Update head to the new node
}

// Insert a new node at the end of the list
void LinkedList::insertAtEnd(int newData) {
    Node* newNode = new Node();  // Create a new node
    newNode->data = newData;
    newNode->next = nullptr;     // New node will be the last, so set next to null

    if (head == nullptr) {       // If the list is empty, new node becomes the head
        head = newNode;
        return;
    }

    Node* temp = head;           // Traverse to the end of the list
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;        // Link the last node to the new node
}

// Search for a specific target value in the list
bool LinkedList::search(int target) {
    Node* temp = head; // Start from the head node

    while (temp != nullptr) {    // Traverse until the end of the list
        if (temp->data == target) {
            return true;         // Return true if we find the target
        }
        temp = temp->next;       // Move to the next node
    }
    return false;                // Return false if the target is not found
}

// Print all nodes in the linked list using the iterator
void LinkedList::printList() {
    for (LinkedListIterator it = begin(); it != end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

