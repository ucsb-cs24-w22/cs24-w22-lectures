//linkedlist.cpp
#include <iostream>
#include "linkedlist.h"
using namespace std;


Node* addToFrontOfList(Node* h, string value){
    //Create a new node on the heap and link it to the first node.
    Node* new_node = new Node {value, h};
    // When we have an empty list, then h is nullptr.
    // The single node in my list has its next pointer as nullptr
    // as it should be
    
    // Make new node point to the existing first node
    // new_node->next = h;
     // h = new_node; redundant in this case

    // Return the new linked list

     return new_node;
    //return new Node {value, head};

}

//Precondition: head is a valid linked list
void printList(Node* head){
    Node* tp = head;
    while(tp){ // tp is not nullptr
        cout<<tp->data;
        //fix the fence post problem
        // not the last node
        if(tp->next) cout<<", ";
        tp = tp->next;
    }
    cout<<endl;

}

int main(int argc, char const *argv[])
{
    string cs24_TAs[] = {"Lucas", "Nawel", "Bowen", "Jack", "April"}; 
    //Simplest possible linked list
    Node* head = nullptr; //empty linked list (no nodes) don't use NULL
    //C++11 shorthand for iterating over arrays
    for(string elem : cs24_TAs){
        head = addToFrontOfList(head, elem);
        printList(head);
    }

    return 0;
}
