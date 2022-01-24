//linkedlist.cpp
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    string cs24_TAs[] = {"Lucas", "Nawel", "Bowen", "Jack", "April"};
    list<string> cs24_TAs_linked_list {"Ajit"}; //create an empty linked list
    vector<string> cs24_TAs_vect;// array that is dynamically resized

    //C++11 shorthand (range-based for loop)
    for(string elem : cs24_TAs){
        cs24_TAs_linked_list.push_back(elem);
        cs24_TAs_vect.push_back(elem);
    }

    cout<<"Printing the elements of the linked list"<<endl;
    for(string elem : cs24_TAs_linked_list){
        cout<<elem<<", ";
    }
    cout<<endl<<endl;
    cout<<"Printing the elements of the vector"<<endl;
    for(string elem : cs24_TAs_vect){
        cout<<elem<<", ";
    }
    cout<<endl;






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
