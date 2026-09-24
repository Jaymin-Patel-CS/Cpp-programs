#include<iostream>
using namespace std;

// the recursion means the calling of function by its self. 
// like in the example of factorial the function factorial calling him self untill it got n = 1.


int factorial(int n)
{
    if (n==0 || n==1)   // this is called as base condition in recursion.
    {
        return 1;
    }
    return n * factorial(n - 1)/* here the recursion is occuring. */;
}

int main()
{
    int a ;
    cout<<"Enter the number : ";
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
    return 0;
}
