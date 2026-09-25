#include<iostream>
using namespace std;

int sum (int a , int b)
{
    return a+b;
}
int sum (int a , int b,int c)
{
    return a+b+c;
}

// function overloading means making the diffrent functions with the same name for diffrent work.
// and the main thing is the compailat decides this by the arguments of the function call.

int main(int argc, char const *argv[])
{
    cout<<"The sum of 1 and 3 is "<<sum(1,3)<<endl;
    cout<<"The sum of 1 , 2 and 3 is "<<sum(1,2,3)<<endl;
    return 0;
}
