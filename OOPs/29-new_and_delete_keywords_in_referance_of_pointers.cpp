#include<iostream>
using namespace std;

int main()
{
    int a = 50;
    int *ptr = &a;
    cout<<"The value at ptr pointer is "<<*ptr<<endl;
    // here the ptr is referancing to the address of a.
    // new keyword is used to make the pointer dynamically.
    int *ppp = new int(40);
    cout<<"The value at ppp pointer is "<<*ppp<<endl;
    
    // delete keyword is used to destroy the memory of the pointers dynamically.
    // like this:::::
    int *arr = new int[3];
    arr[0] = 11;
    arr[1] = 12;
    arr[2] = 13;
    delete[] arr;
    arr = nullptr;
    cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl;
    return 0;
}
