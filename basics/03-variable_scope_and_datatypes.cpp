#include<iostream>
using namespace std;

int c = 6; // this is the globle variable.

int main(){

    // there are two types of variales 
    // 1. local variables = this type of variables only lies in their respective function.
    // 2. global variables = remains same for all the functions (simply defined every where).
    int a = 2 , b = 3; // these are the local variables
    float pi = 3.14; // the local variables have the higher priority if the globle and local have same name.
    char cc = 'f';
    bool d = true;
    cout <<"the value of a is "<<a<<"\nthe value of b is "<<b;
    cout <<"\nthe value of pi is " <<pi;
    cout <<"\nthe value of cc is " <<cc;
    cout<<"\n"<<d;
    // there is five data types 
    // int , float , char , double , boolean
    return 0;
}
