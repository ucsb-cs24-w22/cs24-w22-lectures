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
    //Memory leak, need to call clear
    mylist.clear();
    cout<<mylist;

   // test_copy_constructor();
    
    return 0;
}
