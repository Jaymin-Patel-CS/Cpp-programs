#include<iostream>
using namespace std;

class base1
{
    int data1;
    public:
    base1();
    base1(int a){ data1 = a;}
    void print_base1()
    {
        cout<<"your data1 is "<<data1<<endl;
    }
};
class base2
{
    int data2;
    public:
    base2();
    base2(int a){ data2 = a;}
    void print_base2()
    {
        cout<<"your data2 is "<<data2<<endl;
    }    
};
class derived : public base1 , public base2
{
    int data3 , data4;
    public : 
        derived(int a , int b , int c , int d):base1(a) , base2(b)
        {data3 = c;data4 = d;}
        void print_derived()
        {
        cout<<"your data3 is "<<data3<<endl
            <<"your data4 is "<<data4<<endl;
        } 
};

int main()
{
    derived d1(1,2,3,4);
    d1.print_base1();
    d1.print_base2();
    d1.print_derived();
    return 0;
}
