#include<iostream>
using namespace std;

// there can be more than two classes inherited in derived class.

class Base1
{
    protected:
        int base1num;
    public:
        void set_number_B1(int a){base1num = a;}
};

class Base2
{
    protected:
        int base2num;
    public:
        void set_number_B2(int a){base2num = a;}
};

class derived : public Base1 , public Base2 
{
    public:
        void show()
        {
            cout<<"The variable in base class 1 is "<<base1num<<endl;
            cout<<"The variable in base class 2 is "<<base2num<<endl;
            cout<<"Their sum is "<<base1num + base2num<<endl;
        }
};

int main()
{
    derived jjj;
    jjj.set_number_B1(45);
    jjj.set_number_B2(40);
    jjj.show();
    return 0;
}
