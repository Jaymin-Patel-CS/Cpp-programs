#include<iostream>

using namespace std;

int main()
{
    // referance variables used to indicate the one variable by multiple variables
    int x=1;
    int &y = x; // This is called as referancing variables.
    cout<<"The value of x is "<<x<<endl; 
    cout<<"The value of y is "<<y<<endl;
    return 0;
}
