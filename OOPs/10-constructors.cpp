#include<iostream>
using namespace std;

// the constructors are created to initialize variables of class when the objects are created.
// 1. constructors need to be same name as class.
// 2. consructor must be defined in public part of class.
// 3. they can't return value or return any type .
// 4. they are called automatically when the objects are created.

class complex 
{
    int a,b;
    public:
        complex(void); // this is decleration of constructors.
        void printnum(void){cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;}
};

complex :: complex(void) // defining the constructor's work/code.
{
    a=10;
    b=20;
    // cout<<"#constructor\n"; // this is valid
}

int main()
{
    complex c1 , c2;
    c1.printnum();
    c2.printnum();
    // here the c1 and c2 will automatically initilized with a=10 and b=20 as it automatically invoced constructor at the creation place of them.
    return 0;
}
