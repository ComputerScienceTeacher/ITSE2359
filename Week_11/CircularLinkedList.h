#ifndef CIRCULARLINKEDLIST_H
#define CIRCULARLINKEDLIST_H

#include "LinkedList.h"

class CircularLinkedList : public LinkedList {

    public:
        void insertAtEnd(int newData){
            Node* newNode =new Node();
            newNode->data = newData;

            if(head == nullptr) {
                head = newNode;
                newNode ->next = head;
            } else {
                Node* temp = head;

                while(temp-> next !=head) {
                    temp = temp->next;
                }

                temp-> next = newNode;

                // Last node points to head to complete the circle
                newNode -> next = head; 
            }
        }
        void printList(){
            if (head == nullptr) return;

            Node* temp = head;
            do {
                std::cout << temp->data << " ";
                temp = temp->next;
            } while (temp != head);
            std::cout << std::endl;
        }
};



#endif