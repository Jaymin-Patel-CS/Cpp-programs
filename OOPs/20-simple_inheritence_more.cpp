#include<iostream>
using namespace std;

// in this programe we are going to learn
// how to access private members of the base class
// by the methods of base class.

class base
{
    int data1;
    public: 
        int data2;
        void setdata(){data1 = 10 ; data2 = 20;}
        int getdata1(){return data1;}
        int getdata2(){return data2;}
};

class derived : public base
{
    int data3;
    public:
    // see here we can't access data1 directly so i have used getdata to access it.
        void process(){data3 = data2* getdata1();}
    // if this class was privetely inherited by base then we cant call setdata in main so we have to call setdata in process method.
    // because setdata will come as private so in main we can't access it.
        void display()
        {
            cout<<"The value of data1 is "<<getdata1()<<endl;
            cout<<"The value of data2 is "<<data2<<endl;
            cout<<"The value of data3 is "<<data3<<endl;
        }
};

int main()
{
    derived D;
    D.setdata();
    D.process();
    D.display();
    return 0;
}
