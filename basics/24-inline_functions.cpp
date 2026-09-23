#include<iostream>
using namespace std;

// inline functions are used to replace the real code in main with the code of function.
// because when we use the function with samll code and use multiple times , this creates the friction in execution so 
// to overcome this we replace the function call by the line of code in function at the time of
// compilation . and this totally decided by the compiler. 

// when not to use the inline function.
// 1. when we have large line of code in function. because for long line code functions 
// if we use inlinen fn then the large no of memory of function eill rush on that perticular place and the purpose of using inline function will be violated.
// 2. when we are dealing with static variables).
// static variables are the variables which are only initialized on time in function then the nextt time their value will be the value will be newly assigned to it.
// exmple:
inline int x(int a , int b)
{
    static int c = 0; // c = 0 only first time call  or  you can say this line will be executed one time.
    c +=1;   // at next time call c = 1 from the start
    return a*b;
}

inline int x(int a , int b)
{
    return a*b;
}

int main()
{
    int a , b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    // like this (upprt note's example.)
    // here each x(a,b) will be replaced by a*b at the time of compilation.
    cout<<"The product of a and b is "<<x(a,b)<<endl;
    cout<<"The product of a and b is "<<x(a,b)<<endl;
    cout<<"The product of a and b is "<<x(a,b)<<endl;
    cout<<"The product of a and b is "<<x(a,b)<<endl;
    cout<<"The product of a and b is "<<x(a,b)<<endl;
    cout<<"The product of a and b is "<<x(a,b)<<endl;
    cout<<"The product of a and b is "<<x(a,b)<<endl;
    cout<<"The product of a and b is "<<x(a,b)<<endl;
    cout<<"The product of a and b is "<<x(a,b)<<endl;
    cout<<"The product of a and b is "<<x(a,b)<<endl;
    cout<<"The product of a and b is "<<x(a,b)<<endl;
    cout<<"The product of a and b is "<<x(a,b)<<endl;
    return 0;
}
