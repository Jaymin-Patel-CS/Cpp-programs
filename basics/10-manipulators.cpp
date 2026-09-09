#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // manipulators.
    // most used manipulators are below
    // 1. endl  --> this uaed to give the new line command.
    // 2. setw() --> this is used to arrange the numbers like below code.
    int a = 1,b = 112,c = 1113;
    cout<<"The value of a without setw(4) is : "<<a<<endl;
    cout<<"The value of b without setw(4) is : "<<b<<endl;
    cout<<"The value of c without setw(4) is : "<<c<<endl;
    cout<<endl;
    cout<<"The value of a with setw(4) is : "<<setw(4)<<a<<endl;
    cout<<"The value of b with setw(4) is : "<<setw(4)<<b<<endl;
    cout<<"The value of c with setw(4) is : "<<setw(4)<<c<<endl;

    return 0;
}
