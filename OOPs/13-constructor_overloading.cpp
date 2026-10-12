#include<iostream>
using namespace std ;

class complex
{
    int a,b;
    public:
        // here i have defined the three constructors.
        // compliler will decide which to use for object according to its arguments for constructors.
        // this is called as constructor overloading.
        complex(){
            a = 0;
            b = 0;
        }
        complex(int x){
            a = x;
            b = 0;
        }
        complex(int x , int y){
            a = x;
            b = y;
        }
        void printnum(){cout<<a<<"+"<<b<<"i"<<endl;}
};

int main()
{
    complex c1 , c2(2) , c3(3,4);
    cout<<"c1 = ";
    c1.printnum();
    cout<<"c2 = ";
    c2.printnum();
    cout<<"c3 = ";
    c3.printnum();
    // in the output we will get complex nums as per the compiler taken constructor in work and that is according to their arguments(constructor overloading).
    return 0;
}
