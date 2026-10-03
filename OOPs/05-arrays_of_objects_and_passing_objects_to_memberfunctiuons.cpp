#include<iostream>
using namespace std;

class complex
{
    private:
        int a;
        int b;
    public:
        void setdata(int v1 , int v2){a = v1;b=v2;}
        void setdatabysum(complex o1 , complex o2)
        {
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void printnumber() {cout<<"complex number is "<<a<<"+"<<b<<"i"<<endl;}
};

int main()
{
    int a ,b;
    complex o[3];
    for (int i = 0; i < 2; i++)
    {
        cout<<"Enter the real part of your complex number "<<i+1<<endl;
        cin>>a;
        cout<<"Enter the imaginary part of your complex number "<<i+1<<endl;
        cin>>b;
        o[i].setdata(a,b);
        o[i].printnumber();
    }
    cout<<"The complex number after sum"<<endl;
    o[2].setdatabysum(o[0],o[1]);
    o[2].printnumber();
    return 0;
}
