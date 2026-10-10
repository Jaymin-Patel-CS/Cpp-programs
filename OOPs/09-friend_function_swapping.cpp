#include <iostream>
using namespace std;

class y;
class x
{
        int data ;
    public:
        void setdata(int a){data = a;}
        void display(){cout<<data<<endl;}
        friend void exchange(x & , y &);
    };
    class y
    {
        int data ;
    public:
        void setdata(int a){data = a;}
        void display(){cout<<data<<endl;}
        friend void exchange(x & , y &);
};

void exchange(x &a , y &b)
{
    int temp = b.data;
    b.data = a.data;
    a.data = temp;
}

int main()
{
    x a1;
    y b1;
    a1.setdata(2);
    b1.setdata(5);
    cout<<"The value of private data of x before exchange is: ";
    a1.display();
    cout<<"The value of private data of y before exchange is: ";
    b1.display();
    exchange(a1,b1);
    cout<<"The value of private data of x after exchange is: ";
    a1.display();
    cout<<"The value of private data of y after exchange is: ";
    b1.display();
    return 0;
}
