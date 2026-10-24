#include<iostream>
using namespace std;

class base1{
    public:
        void greet(){cout<<"!! HELLO !!"<<endl;}
};

class base2{
    public:
        void greet(){cout<<"!! HII !!"<<endl;}
};

class derived : public base1 , public base2
{
    public:
    // this is how scope of function from base class defined.
        void greet(){
            base2 :: greet(); 
        }
    // and local function means the function with same name in derived class with diff or same work.
};

// here if call show without defining the show scope resolution in base class, so this will throw error.
// to be safe from that we define the function in derived class with same name in which we will define scope of it.
// or if there is present the function with the same name in derived calss (local function),then it will use that local function
// and will not try to call it from base class

int main()
{
    derived der;
    der.greet();  //this will throw error. if no scope of this defined in derived class.    
    return 0;
}
