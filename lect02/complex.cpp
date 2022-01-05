//complex.cpp
/* Review basics of classes */

/* Example: Datatype to represent complex numbers (could have been a struct)
In general a complex number is of the form: a + j*b, 
where  a: real part  b: imaginary part j = sqrt(-1) */


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
    complex(/* args */); 
    //destructor: used to free up resources if needed
    ~complex(); 
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

};


complex::complex(/* args */)
{
}

complex::~complex()
{
}

int main(int argc, char const *argv[])
{
    complex c1, c2;
    c1.print();
    //cout<<c1;
    return 0;
}
