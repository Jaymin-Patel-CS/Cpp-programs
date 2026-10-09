#include<iostream>
using namespace std;

// forward declaration of classes (better practice.)
class complex;

// friend member functions means giving permitions to member functions of other class.

class calculator
{
    public:
        int add(int a , int b){return (a+b);}
        int addrealcomplex(complex o1 , complex o2); // only predefination because compiler didn't get the declearation of a and b of classs complex.
        
};

class complex 
{
    private:
        int a,b;
        friend int calculator::addrealcomplex(complex , complex); // here given permition.
    public:
        void setnumbers(int x,int y){a = x; b = y;}
        void displaynumber(){cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;}
};

int calculator :: addrealcomplex(complex o1 , complex o2)
{
    return o1.a + o2.a;
}

int main()
{
    complex o1 , o2;
    o1.setnumbers(4,3);
    o1.displaynumber();
    o2.setnumbers(2,3);
    o2.displaynumber();
    calculator calc ;
    int a;
    a = calc.addrealcomplex(o1 , o2);
    cout<<"The sum of real part of complex o1 and o2 is "<<a;

    return 0;
}
