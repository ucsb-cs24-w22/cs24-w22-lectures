//myprog.cpp
#include<iostream>
#include "complex.h"
#include <cmath>
using namespace std;

void foo(complex c){ // pass by value, copy constructor is called
    cout<<"In foo()"<<endl;
    
}

void bar(complex& c){ // pass by reference, no constructor is called
    cout<<"In bar()"<<endl;
}


int main(int argc, char const *argv[])
{
    complex c1, c2; // c1 and c2 are objects of type complex
                    // (1): This statement is calling a function: constructor
                    // (2): If no constructor is defined, then compiler provides
                    //      a default one but the member variables will have junk values
    cout<<"Calling foo()"<<endl;
    cout<<"Parameter to foo() is passed by value - calls copy constructor"<<endl;
    foo(c1);
    cout<<"Calling bar()"<<endl;
    cout<<"Parameter to bar() is passed by reference - no call to copy constructor"<<endl;
    bar(c2);
    
    complex c3 {10, 20}; //c++11 notation similar to array declaration int arr[] {1, 2, 3};
                        // (1): Calls a constructor

    complex c4 {10}; // default value of 0 for imag is used
    // c1, c2, c3, c4 are on the stack because they are local to main

    
    complex* c5 = new complex {40, 50};
    cout<<"Created pointer c5 that points to heap object"<<endl;
    // c5 is a pointer to type complex, c5 is on the stack but the complex object that 
    // its pointing to is on the heap

    cout<<"Value of the pointer c5: "<<c5<<endl;
    cout<<"c1: "<< c1;// function call operator<<(cout, c1); cout.operator<<(c1)
    cout<<endl;
    cout<<"c3: "<<c3;
    cout<<endl;
    cout<<"c4: "<<c4;
    cout<<endl;
    cout<<"c5: "<<*c5;
    cout<<endl;
    
    cout<<"c6 = c1 + c3"<<endl;
    complex c6;
    c6 = c1 + c3; // compiler translates the statement to c6 = operator+(c1, c2);
    
    cout<<"c6: "<<c6;
    cout<<endl;

    complex c8 {10, 20};

    complex c7 {*c5} ; // calls copy constructor

    cout<<"c5: "<< *c5;
    cout<<endl;
    cout<<"c7: "<< c7;
    cout<<endl;

 
    delete c5; //calls destructor then deletes the heap object that c5 points to 
    
    return 0;
}
