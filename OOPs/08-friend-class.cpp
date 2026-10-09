#include<iostream>
using namespace std;

class complex; 

class calculator
{
    public:
        int add(int a , int b){return (a+b);}
        int addrealcomplex(complex o1 , complex o2); // only predefination because compiler didn't get the declearation of a and b of classs complex.
        int addcomplexpart(complex o1 , complex o2);
        
};

class complex 
{
    private:
        int a,b;
        // friend int calculator::addrealcomplex(complex , complex); // here given permition.
        // friend int calculator::addcomplexpart(complex , complex);
         // when we have to make multiple functions as friend, so declear whole class as friend.because making friend all of them is not better way.
        friend class calculator;
    public:
        void setnumbers(int x,int y){a = x; b = y;}
        void displaynumber(){cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;}
};

int calculator :: addrealcomplex(complex o1 , complex o2)
{
    return o1.a + o2.a;
}
int calculator :: addcomplexpart(complex o1 , complex o2)
{
    return o1.b + o2.b;
}

int main()
{
    complex o1 , o2;
    o1.setnumbers(4,3);
    o1.displaynumber();
    o2.setnumbers(2,2);
    o2.displaynumber();
    calculator calc ;
    int a;
    a = calc.addrealcomplex(o1 , o2);
    cout<<"The sum of real part of complex o1 and o2 is "<<a<<endl;
    a = calc.addcomplexpart(o1 , o2);
    cout<<"The sum of complex part of complex o1 and o2 is "<<a<<endl;

    return 0;
}
