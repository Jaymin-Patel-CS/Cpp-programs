#include<iostream>
using namespace std;

// default behaviour when base class pointer is associated with object of derived class is 
// you can only access the member functions of the base class not of derived class.

// but when we have to point the pointer of base and inherited class at the same place in situation like above we use virtual functions.
// by using virtual functions we can overright default behaviour.

class base
{
    public:
        int varbase = 1;
        virtual void display(){
            cout<<"Display of base class is called"<<endl;
            cout<<"Value of variable of base class is "<<varbase<<endl;
        }
};

class derived : public base
{
    public:
        int varderived = 1;
        void display(){
            cout<<"Display of derived class is called"<<endl;
            cout<<"Value of variable of base class is "<<varbase<<endl;
            cout<<"Value of variable of derived class is "<<varderived<<endl;
        }
};

int main()
{
    derived d1;
    base* ptrbase = &d1;
    ptrbase->display();
    return 0;
}
