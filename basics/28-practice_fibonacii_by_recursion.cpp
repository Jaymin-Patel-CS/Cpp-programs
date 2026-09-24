#include<iostream>
using namespace std;

int fibonacii(int n)
{
    if (n==0 || n ==1)
    {
        return 1;
    }
    return fibonacii(n-1) + fibonacii(n-2);
}

int main()
{
    int a ;
    cout<<"Enter the number : ";
    cin>>a;
    cout<<"The "<<a<<" th term of the fibonacii sequence is "<<fibonacii(a)<<endl;
    return 0;
}
