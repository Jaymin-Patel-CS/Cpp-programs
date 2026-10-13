#include<iostream>
using namespace std;

class simple 
{
    int a , b, c;
    public:
        simple(int x , int y =0 /*this is called default argument*/ , int z = 0)
        {a = x ; b = y ; c = z;} // when we haven't specified the arguments in constructor call then the will be set on the default value specified above.
        void printnum(){cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl;}
};


int main()
{
    simple s1(1) , s2(1,2) , s3(1,2,3);
    s1.printnum();
    s2.printnum();
    s3.printnum();
    return 0;
}
