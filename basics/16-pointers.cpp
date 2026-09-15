#include<iostream>
using namespace std;

int main()
{
    // the pointers are the variable for storing the address of the assigned variable.
    // address is the number on which the variable had stored.
    int a = 2;
    int *ptr = &a;

    // '&' --> (address of) operator 
    // '*' --> (dereferance) operator 

    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<ptr<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<*ptr<<endl;

    // we can make the pointer to pointer and to access the value of main variable we can use the **.
    // we can make the chain of this.

    return 0;
}
