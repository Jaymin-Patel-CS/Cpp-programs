#include<iostream>
using namespace std;

// imp things about inheritance.
// 1.privet members can't be inherited.
// 2.we have to define our public members of the base class will be privet or public in derived class.
//   -->by default it is public.
// 3.we have to make a default constructor in our base class.

// base class
class employee
{
    float salary;
    public: 
        int id;
        employee(){} // this is compulsary if we want this to be base class of any class. otherwise this will throw error.
        employee(int a,float b = 34.33)
        {
            id = a;
            salary = b;
        }
};

// derived class from employee
class programmer : employee
{
    int languagecode;
    public:
        programmer(int a,int b = 9)
        {
            id = a; // we can see programmer don't have id variable but we can still use employee id.
            languagecode = b;
        }
        void getdata()
        {
            cout<<"The language code of employee with id "<<id<<" is "<<languagecode<<endl;
        }
};

int main()
{
    programmer jjj(111) , ppp(222,10) ;
    jjj.getdata();
    ppp.getdata();
    return 0;
}
