#include<iostream>
using namespace std;

class complex 
{
    int a,b;
    public:
        complex(int x , int y) // this is called as parameterized constructor.
        // which takes parameters and do its work as per code. 
        {
            a = x; b = y;
        }
        void printnumber(){cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;}
};

int main()
{
    // implicit call.
    complex a(2,4);
    a.printnumber();
    // explicit call.
    complex b = complex (4,2);
    b.printnumber();
    return 0;
}
