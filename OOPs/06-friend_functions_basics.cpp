#include<iostream>
using namespace std;

// friend functions are the normal functions which get the permition to access the private data of the class.
// note : the friend functions are not the member functions of the class.
// friend functions cannot be accessed by the this way : o3.sumcomplex(o1.o2) == Invaalid.
// this type of functions can be called independently.

class complex 
{
    int a ;
    int b;
    friend complex sumcomplex(complex o1 , complex o2); // this line declear that the foreign function for the class ca naccess its private data.
    public:
        void setdata(int n1 , int n2) { a = n1; b=n2; }
        void getdata(void){cout<<"The complex is "<<a<<"+"<<b<<"i"<<endl;}
};
complex sumcomplex(complex o1 , complex o2)
{
    complex o3;
    o3.a = o1.a + o2.a;
    o3.b = o1.b + o2.b;
    return o3;
}

int main()
{
    int x,y;
    complex o[2] , sum;
    for (int i = 0; i < 2; i++)
    {
        cout<<"Enter the real part of your complex number "<<i+1<<endl;
        cin>>x;
        cout<<"Enter the imaginary part of your complex number "<<i+1<<endl;
        cin>>y;
        o[i].setdata(x,y);
        o[i].getdata();
    }
    sum = sumcomplex(o[0],o[1]);
    printf("---------------\n");
    sum.getdata();
    return 0;
}
