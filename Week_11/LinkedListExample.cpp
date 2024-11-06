#include<iostream>

using namespace std;

// structure of a node
struct Node {
    int data;
    Node* next;
};

//insert a new node at the beginning
void insertAtBeginning(Node*& head, int newData);

//insert a new node at the end
void insertAtEnd(Node*& head, int newData);

//insert a new node at a specific position
void insertAtPosition(Node*& head, int position, int newData);

//delete a node from the Beginning of the list
void deleteFromBeginning(Node*& head);

//delete a node from the End of the list
void deleteFromEnd(Node*& head);

//delete a node from a Position of the list
void deleteFromPosition(Node*& head, int position);

//print all nodes
void printAllNodes(Node*& head);

int main()
{
    //instantiate;
    Node* head = nullptr;
    Node* head2 = nullptr;

    Node* first = new Node();
    Node* second = new Node();

    //first node creation 
    first->data = 1;
    first->next =second;
    
    //second node creation
    second->data =2;
    second->next = nullptr;

    //head node creation
    head = first;

    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);

    printAllNodes(head);

    deleteFromPosition(head, 3);
    deleteFromBeginning(head);
    deleteFromEnd(head);

    printAllNodes(head);

    return 0;
}


void printAllNodes(Node*& head){
    //traversing all nodes in the linked list
    Node* current = head;
    while(current != nullptr){
        cout << current->data << " ";
        current = current->next;
    }

    cout << endl;

}

void insertAtBeginning(Node*& head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node*& head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;

    //checks if the list is empty, if so, the head is the new node
    if (head == nullptr) {
        head = newNode;
        return;
    }

    //traverse to the end and link the new node
    Node* last = head;
    while (last->next != nullptr) {
        last = last->next;
    }
    last->next = newNode;
}


// Function to insert a node at a specific position in the list
void insertAtPosition(Node*& head, int position, int newData) {
    // If inserting at the beginning, reuse insertAtBeginning
    if (position == 0) {
        insertAtBeginning(head, newData);
        return;
    }

    Node* newNode = new Node(); // Create the new node
    newNode->data = newData;    // Set data of the new node

    Node* temp = head;          // Temporary node to traverse the list

    // Traverse to the node just before the insertion point
    for (int i = 0; i < position - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    // Check if position is out of bounds
    if (temp == nullptr) return;

    // Insert the new node by adjusting pointers
    newNode->next = temp->next; // Point new node to the current node at the position
    temp->next = newNode;       // Link previous node to the new node
}


void deleteFromBeginning(Node*& head) {
    if (head == nullptr) return;

    Node* temp = head;
    head = head->next;
    delete temp;
}


// Function to delete the last node in the list
void deleteFromEnd(Node*& head) {
    // If list is empty, there’s nothing to delete
    if (head == nullptr) return;

    // If there's only one node, delete it and update head to nullptr
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    // Traverse to the second-to-last node
    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    // Delete the last node and update second-to-last node’s next to nullptr
    delete temp->next;
    temp->next = nullptr;
}

// Function to delete a node from a specific position
void deleteFromPosition(Node*& head, int position) {
    // If list is empty, there’s nothing to delete
    if (head == nullptr) return;

    // If deleting the first node, reuse deleteFromBeginning
    if (position == 0) {
        deleteFromBeginning(head);
        return;
    }

    Node* temp = head; // Temporary pointer to traverse the list

    // Traverse to the node just before the target position
    for (int i = 0; i < position - 1 && temp->next != nullptr; i++) {
        temp = temp->next;
    }

    // Check if position is out of bounds
    if (temp->next == nullptr) return;

    // Store the node to be deleted
    Node* nodeToDelete = temp->next;

    // Update pointers to bypass the deleted node
    temp->next = nodeToDelete->next;

    // Delete the targeted node
    delete nodeToDelete;
}

