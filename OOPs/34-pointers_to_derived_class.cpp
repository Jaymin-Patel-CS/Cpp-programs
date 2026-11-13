#include<iostream>
using namespace std;

class base 
{
    public:
        int varbase = 50;
        void display()
        {
            cout<<"value of Variable of base class is "<<varbase<<endl;
        }
};

class derived : public base 
{
    public:
        int varderived = 100;
        void display()
        {
            cout<<"Value of variable of base class is "<<varbase<<endl;
            cout<<"Value of variable of derived class is "<<varderived<<endl;
        }
};

int main()
{
    derived OBJderived;
    base *basePTR = &OBJderived;
    // here we have assigned base class object to pointer of derived class
    // then the pointer can only access to base class not the derived class;
    basePTR->display(); // here the base class display is called in output

    derived *derPTR = &OBJderived;
    // here we have assigned derived class object to pointer to derived class
    // then the pointer can access both classes but when we will call .display() 
    // display form derived class will be called because local method of the same name get priority in case of same arguments.
    derPTR->display();
    return 0;
}
