#ifndef ORDEREDLINKEDLIST_H
#define ORDEREDLINKEDLIST_H

#include "LinkedList.h"

class OrderedLinkedList : public LinkedList {
    public:
        void insertOrdered(int newData) {
            Node* newNode = new Node();
            newNode->data = newData;
            newNode->next = nullptr;

            //insert at the beginning if the list is empty or the newData has the smallest value
            if (head == nullptr || head->data >= newData){
                newNode->next = head;
                head = newNode;
                return;
            }

            // we find the correct position by iterating through the list unril we reach a node whose next element is larger
            Node* current = head;
            while(current->next != nullptr && current->next->data <newData) {
                current = current->next;
            }

            newNode->next = current->next;
            current->next = newNode;

        }
};



#endif