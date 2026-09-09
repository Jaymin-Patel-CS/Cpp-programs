#include<iostream>
using namespace std;

int main()
{
    int a = 3;
    cout<<"The value of a before the change is: "<<a<<endl;
    a = 4;
    cout<<"The value of a after the change is: "<<a<<endl;
    // this code is good if we want the changable value of variable a.
    // in case if we don't want to change want to make the constant in whole code so that we cant change it accidently.
    // we make this type of variable like this.
    const int b = 3; // this value of b can't be changed...
    cout<<"The value of b is: "<<b<<endl;
    /*b = 5;*/ // this will throw error.
    // this const function is used to make the variables like pi = 3.14 whose value is always const.
    return 0;
}
