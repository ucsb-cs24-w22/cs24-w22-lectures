//filename: linkedlist.h (modified version of the CS16 final exam code from warmup-lab)
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;
//Stores string type data
class LinkedList{
    public:
        //What are the operations on a linked list
        LinkedList():head(nullptr), tail(nullptr){}
        string getHead() const;
        void prepend(string value);
        void append(string value);
        void clear();
        bool search(string value);
        void print() const;
        friend ostream& operator<<(ostream& out, LinkedList& ll);

    private:
        struct Node{
            string data;
            Node* next; //self-referencing
        };

        Node* head;
        Node* tail;
        // function that adds a node to the front of list
        // Precondition: @param head stores a valid linked list
        //                 @param value is a string 
        // Postcondition: Add a new node with data value to the front of the list
        // returns the new list
        Node* addToFrontOfList(Node* head, string value);
        // Precondition: @param head stores a valid linked list
        //                 @param value is a string 
        // Postcondition: Add a new node with data value to the front of the list
        // and update the head parameter to hold the address of the new list
        // void addToFrontOfList(Node*& head, string value); 
        void printList(Node* head) const;

        //Pre-condition: head is a pointer to the first node in a linked list
        //Post-condition: It deletes all the nodes in the list from heap memory
        void clearList(Node* head);

};

ostream& operator<<(ostream& out, LinkedList& ll);



#endif