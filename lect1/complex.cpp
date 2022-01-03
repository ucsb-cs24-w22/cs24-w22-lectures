//complex.cpp
// Review basics of classes
// initialize objects: constructors
// Complex number is of the form: a + j*b, j = sqrt(-1) 
// Encapsulation
#include <iostream>
using namespace std;
class complex
{
private:
    /* data */
    // member variables
    double real;
    double imag;

public:
    complex(/* args */); //default constructor: initialize member variables of class
    ~complex(); //destructor : freeing up resources if needed
    //getter functions
    double getImag() const{
        return imag;
    }
    double getReal() const{
        //real = 3;
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
    /* code */
    complex c1, c2;
    c1.print();
    //cout<<c1;
    return 0;
}
