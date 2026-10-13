#include<iostream>
using namespace std;

class number
{
    int a;
    public:
        number(){a = 0;}
        number(int x){a = x;}
        number(number &x)
        {
            cout<<"...............copy constructor called................"<<endl;
            a = x.a;
        }
        void printnum(){cout<<"Number assigned to this object is "<<a<<endl;}
};

int main()
{
    number n1 , n2(5);
    n1.printnum();
    n2.printnum();
    number n3(n2); // copy constructor invoced.
    n3.printnum(); 
    // in case of n3 = n1  or this type of operation copy constructor is not called.
    // if we haven't made any copy constructor in program , compiler already have its own copy constructur and by default it will be called.
    return 0;
}
