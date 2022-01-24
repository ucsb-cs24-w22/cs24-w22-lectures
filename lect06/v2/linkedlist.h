//filename: linkedlist.h - version 2
//linked list with structs
//Here we represented a linked list as its own struct type
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

struct Node{
    string data;
    Node* next; //self-referencing
};

struct LinkedList{
    Node* head;
    Node* tail;
};


// function that adds a node to the front of list
// Precondition: @param head stores a valid linked list
//                 @param value is a string 
// Postcondition: Add a new node with data value to the front of the list
// returns the new list
void addToFrontOfList(LinkedList*& list, string value);

void printList(LinkedList*& list);

void clearList(LinkedList*& list);



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


void printList(Node* head);

// append a node to the list
// how can we pass a linkedlist as a parameter to a function


//Pre-condition: head is a pointer to the first node in a linked list
//Post-condition: It deletes all the nodes in the list from heap memory
void clearList(Node* head);

//IMPORTANT: In all the functions, each node in the linked-list may only 
//contain a STRING data (NOTE: The linkedlist we are implementing is different 
//from the one in the CS16-Final exam Q3 (warmup lab) where each node stored
//a single character)

//All functions below have been modified accordingly

//Precondition: The address of a valid LinkedList and a string
//Postcondition: Adds a new node with data element set to value to the
//end of the linked list.
//void addToEndOfList(LinkedList*& list, string value);

//Precondition: A string array with a given length
//Postcondition: The address of a new LinkedList containing all the
//characters of the input array in the same order, where each node of
//the linked list contains one element of the array.
//LinkedList* arrayToLinkedList(string* arr, int len);


#endif