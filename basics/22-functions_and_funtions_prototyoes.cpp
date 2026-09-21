#include<iostream>
using namespace std;

int sum (int a , int b);  // this is the function prototype.
// this helps us introduce our function to main the actual code of the function.

int main()
{
    int num1 , num2;
    cout<<("Enter the number 1 : ")<<endl;
    cin>>num1;
    cout<<("Enter the number 2 : ")<<endl;
    cin>>num2;
    cout<<"The sum of num1 and num2 is "<<sum(num1 , num2) /*this is called function call*/ <<endl;
    return 0;
}

int sum (int a , int b)   // this is function defination.
{
    int c = a+b;
    return c;
}