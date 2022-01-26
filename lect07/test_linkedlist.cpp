//linkedlist.cpp -version 3
//linked list with classes
#include <iostream>
#include "linkedlist.h"
using namespace std;

void test_copy_constructor(){
    // series of test cases to test the copy constructor
    cout<<"Testing copy constructor"<<endl;
    LinkedList ll; //empty linked 
    ll.prepend("April");
    ll.prepend("Lucas");
   
    LinkedList mm {ll}; // implicit call to the copy constructor

    cout<<"Expect to get Lucas, April"<<endl;
    ll.print();
    cout<<"Expect to get Lucas, April"<<endl;
    mm.print();

    //Default copy constructor

}



int main(int argc, char const *argv[])
{
    string cs24_TAs[] = {"Lucas", "Nawel", "Bowen", "Jack", "April"}; 
    //Use linked list as a type
    LinkedList mylist; //empty linked list
    //C++11 shorthand (range-based for loop)
    for(string elem : cs24_TAs){
        mylist.prepend(elem);
        cout<<mylist;
    }
    LinkedList mylist2;
    mylist2 = mylist; //call the copy assignment function
    //mylist2.operator=(mylist);

    //Segmentation fault: Program crashes unexpectedly
    //trying access some invalid memory location
    //(1) location exists but program doesn't have access permission
    //(2) location that does not exist

    //Forcing some segmentation faults
    //(1) Dereferencing a null pointer
    int* p=nullptr;
    cout<<p<<endl;  //Okay 
    //cout<<*p<<endl; //Segmentation fault

    //(2) Out of bound array access - may result in a segfault
    //(3) Double delete 
    p = new int {10};
    delete p;
    p = nullptr;
    delete p; //delete on a nullptr is okay

    //(4) Dereferencing a bad pointer 

    test_copy_constructor();

    return 0;
}
