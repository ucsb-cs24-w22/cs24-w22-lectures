//complex.h
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
    
    // parametrized constructor with default values for the params
    complex(double re = 0, double im = 0 );
    complex(const complex & other);
    ~complex();
    double getImag() const;
    double getReal() const;
    void print() const;
    double magnitude() const;
    complex operator+(complex& rhs);

};

ostream& operator<<(ostream& cout, complex& c1); //non-member related to complex class