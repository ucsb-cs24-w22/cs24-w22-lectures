//linkedlist.cpp -version 3
//linked list with classes
#include <iostream>
#include "linkedlist.h"
using namespace std;

string LinkedList::getHead() const{
    return "April";

}
void LinkedList::prepend(string value){
    head = addToFrontOfList(head, value);
    if(!tail){
        tail = head;
    }


}
void LinkedList::append(string value){

}
void LinkedList::clear(){
    clearList(head);
    head = tail = nullptr;

}
bool LinkedList::search(string value){

    return true;

}

void LinkedList::print() const {
    printList(head);

}
//cout<<ll;
ostream& operator<<(ostream& out, LinkedList& ll){
    ll.printList(ll.head);
    return out;

}

LinkedList::Node* LinkedList::addToFrontOfList(Node* h, string value){
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
void LinkedList::printList(Node* head) const{
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
void LinkedList::clearList(Node* head){
    if(!head) return; //if(head == nullptr) return;
    clearList(head->next); // delete the rest of the list
    delete head;

}


