#include<iostream>
using namespace std;

void swap(int a , int b) // this is call by value function. here the copy have passed of the real variables.
{
    int temp;
    temp = b;
    b = a;
    a = temp;
}

void referanceswap(int *a , int *b) // this is call by referance function. here the real address have passed.
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

void referancevariableswap (int &a , int &b) // this is the referance variable method.here we pass the referance of the address of real variable.
{
    int temp = b;
    b = a;
    a = temp;
}

int& referancevariableswap_2 (int &a , int &b) // here '&' is used after int cuz we arer returning the referance value .
{
    int temp = b;
    b = a;
    a = temp;
    return a;
}

int main()
{
    int a = 1;
    int b = 2;
    cout<<"The value of a is "<<a<<"The value of b is "<<b<<" before swap"<<endl;
    swap(a,b); // this will not swap the variables cuz here we are passing copy of the variable not the real variables.
    cout<<"The value of a is "<<a<<" The value of b is "<<b<<" after swap"<<endl;
    referanceswap(&a,&b); // this will swap the variable cuz here we are passing the address of the real variable and then changing it.
    cout<<"The value of a is "<<a<<" The value of b is "<<b<<" after referanceswap"<<endl;
    referancevariableswap (a ,b);
    cout<<"The value of a is "<<a<<" The value of b is "<<b<<" after referancevariableswap"<<endl;
    // this is just for knowledge . 
    // in next line we have assigned the value 44 to return value of referancevariableswap_2
    referancevariableswap_2(a,b) = 5;
    cout<<"The value a after assigning the 5 to return value of referancevariableswap_2 : "<<a<<endl;
    return 0;
}
