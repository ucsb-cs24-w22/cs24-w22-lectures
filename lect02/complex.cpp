//complex.cpp
/* Review basics of classes */

/* Abstract Data Types */
/* Example: Datatype to represent complex numbers (could have been a struct)
In general a complex number is of the form: a + j*b, 
where  a: real part  b: imaginary part j = sqrt(-1) */
/* complex c1; c1 is an object */

/* Big 4: Special function of any class, C++ provides some default implementations */
/*
    1. Constructor: Function used to initial objects
    2. Destructor: Function that "clean up" tasks right BEFORE an object 
                   is removed from memory
    3. Copy constructor (next lecture)
    4. Copy assignment operator (next lecture)
*/


#include <iostream>
using namespace std;
class complex
{
private:
    // member variables are typically private which means 
    // they can only be accessed by member functions of the class
    double real;
    double imag;

public:
    // Member functions and variables in the public region can be accessed 
    // by code outside the class (non-member fuunctions) 
    
    //default constructor: initializes member variables to default values
    // complex(/*no params*/):real(0), imag(0){
    //     cout<<"Called default constructor"<<endl;
    // } 
    // parametrized constructor with default values for the params
    complex(double re = 0, double im = 0 ):real(re), imag(im) {
        cout<<"Called parametrized constructor"<<endl;
    } 

    ~complex(){
        cout<<"Called destructor"<<endl;
    }
    // complex(double re ):imag(10), real(imag){
    //     cout<<"Called parametrized constructor"<<endl;
    // } 

    //destructor: used to free up resources if needed
    //~complex(); 
    // getters (accessors): return value of member variables
    double getImag() const{
        return imag;
    }
    // the const keyword at the end of the function means that
    // the function getImag() cannot modify any of the member variables.
    // Trying to modify the member variables, will result in a compiler error
    double getReal() const{
        //real = 3; this would result in a compiler error
        return real;
    
    }
    void print() const{
        if(imag>=0){
            cout<<real<<" + "<<imag<<"j"<<endl;
        }else{
            cout<<real<<" - "<<-1*imag<<"j"<<endl;
        }

    }

    // complex operator+(complex& rhs){
    //   lhs is implicit object: this
    //  
    //     return  complex {this->getReal() + rhs.getReal(), this->getImag() + rhs.getImag()};
               

    // }



};

// c6 = c1 + c2;
// c6 = operator+(c1, c2);

complex operator+(complex& lhs, complex& rhs){
    //implicit object: this
    //second
    return  complex {lhs.getReal() + rhs.getReal(), lhs.getImag() + rhs.getImag()};
            

}


// complex::complex(/* args */)
// {
// }

// complex::~complex()
// {
// }

// overloaded the operator<< for complex class
// non-member function
void operator<<(ostream& cout, complex& c1){

    c1.print();

}

int main(int argc, char const *argv[])
{
    complex c1, c2; // c1 and c2 are objects of type complex
                    // (1): This statement is calling a function: constructor
                    // (2): If no constructor is defined, then compiler provides
                    //      a default one but the member variables will have junk values
   // int arr[] {1, 2, 3}; //c++11 notation
    complex c3 {10, 20};  //c++11 notation
                        // (1): Calls a constructor

    complex c4 {10}; // default value of 0 for imag is used
    // c1, c2, c3, c4 are on the stack because they are local to main

    // complex* c5 = new complex {40, 50};
    // c5 is a pointer to type complex, c5 is on the stack

    cout<<"Printing out the value of the pointer c5: "<<c5<<endl;
    cout<<c1;// function call operator<<(cout, c1); cout.operator<<(c1)
    cout<<c3;
    cout<<c4;
    cout<<*c5;

    complex c6;
    c6 = c3 + *c5; // c6 = c3.operator+(*c5);
                   // c6 = operator+(c3, *c5);
    cout<<c6;
    // c1.print();
    // c3.print();
    // c4.print();
    // c5->print();
    //cout<<c1;
    // What is the output of the program?
    // A. Random values for c1 and c2
    // B. Compiler error (because there is a parameterized constructor,
    //                    compiler doesn't provide a default)

    // Destructor is called only 4 times  because the heap object (*c5)
    // is not deleted automatically from memory
    delete c5; //deletes the object that c5 points to on the heap
    return 0;
}
