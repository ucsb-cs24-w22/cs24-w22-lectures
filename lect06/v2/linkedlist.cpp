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
    if(!head) cout<<"Empty list"<<endl;
    while(tp){ // tp is not nullptr
        cout<<tp->data;
        //fix the fence post problem
        // not the last node
        if(tp->next) cout<<", ";
        tp = tp->next;
    }
    cout<<endl;

}
//Pre-condition: head is a pointer to the first node in a linked list
//Post-condition: It deletes all the nodes in the list from heap memory
void clearList(Node* head){
    if(!head) return; //if(head == nullptr) return;
    clearList(head->next); // delete the rest of the list
    delete head;

}

void addToFrontOfList(LinkedList*& list, string value){
    list->head = addToFrontOfList(list->head, value);
    if(!list->tail) {
        list->tail = list->head;
    }

}

void printList(LinkedList*& list){
    if(!(list->head))cout<<"List is empty"<<endl;
    printList(list->head);


}

void clearList(LinkedList*& list){
    clearList(list->head);
    list->head = list->tail = nullptr;
}

int main(int argc, char const *argv[])
{
    string cs24_TAs[] = {"Lucas", "Nawel", "Bowen", "Jack", "April"}; 
    //Use linked list as a type
    LinkedList* mylist = new LinkedList{nullptr, nullptr}; //empty linked list
    //C++11 shorthand (range-based for loop)
    for(string elem : cs24_TAs){
        addToFrontOfList(mylist, elem);
        printList(mylist);
    }
    //Memory leak, need to call clear
    clearList(mylist);
    printList(mylist);


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
