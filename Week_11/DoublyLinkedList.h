#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include<iostream>

using namespace std;

struct DoublyNode{
    int data;
    DoublyNode* next;
    DoublyNode* prev;
    DoublyNode() : prev(nullptr) {};
};

class DoublyLinkedList{
    private:
        DoublyNode* head;
        DoublyNode* tail;


    public:
        DoublyLinkedList() : head(nullptr), tail(nullptr) {}

        void insertAtEnd(int newData){
            DoublyNode* newNode = new DoublyNode();
            newNode -> data = newData;
            newNode -> next = nullptr;
            newNode -> prev = tail;

            if(tail != nullptr) tail->next = newNode;
            else head = newNode;

            tail = newNode;
        }

        void printForward() {
            DoublyNode* current = head;
            while (current != nullptr) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }

        void printBackward() {
            DoublyNode* current = tail;
            while (current != nullptr) {
                cout << current->data << " ";
                current = current->prev;
            }
            cout << endl;
        }

};



#endif