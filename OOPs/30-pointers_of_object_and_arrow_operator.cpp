#include<iostream>
using namespace std;

class complex
{
    int realnum , imgnum;
    public:
        void setdata(int a , int b)
        {
            realnum = a;
            imgnum = b;
        }
        void getdata()
        {
            cout<<"The real part of the complex is "<<realnum<<endl;
            cout<<"The imaginary part of the comple is "<<imgnum<<endl;
        }
};

int main()
{
    complex c1; // the object of the class is created.
    // the normal way to initilize the pointer in c++ 
    // and using pointer to access member functions of that object.
    complex *ptr = &c1;
    (*ptr).setdata(1,2);
    (*ptr).getdata();

    // c++ new way to initilize the pointer.
    complex *ptrr = new complex;
    // and arrow operator. this is used to access the public member function.like below----
    ptrr->setdata(2,3);
    ptrr->getdata();
    return 0;
}
