//linkedlist.cpp
#include <iostream>
#include "linkedlist.h"
using namespace std;


Node* addToFrontOfList(Node* h, string value){
    //Create a new node on the heap and link it to the current first node.
    Node* new_node = new Node {value, h};
    // When we have an empty list, then h is nullptr.
    // The single node in my list has its next pointer as nullptr
    // as it should be
 
    // h = new_node; redundant in this case

    // Return the new linked list
    return new_node;
    //Alternatively the code for this function could just be one line
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
    //C++11 shorthand (range-based for loop) for iterating over arrays
    for(string elem : cs24_TAs){
        head = addToFrontOfList(head, elem);
        printList(head);
    }




    // Question from office hours about how to create a node 
    // whose next member points to itself and the implications of doing so.
    
    // //Example of creating such a node on the stack
    // Node stack_node {"Jack", nullptr}; 
    // stack_node.next = &stack_node; 

    //  //Example of creating such a node on the heap
    // Node* heap_node = new Node{"Jack", nullptr};
    // heap_node->next = heap_node;

    // //Implication: infinite loop when we call printList. Press ctrl-c to terminate
    // printList(heap_node);

    return 0;
}
