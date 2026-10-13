#include<iostream>
using namespace std;

class bankdeposite
{
    int balance,years;
    float rate , returnvalue;
    public:
        bankdeposite(){}; // this is the default argument if we not defined this program will throw error because
                          // at the time of objeat creation compilar needs to define some memory to it.
        bankdeposite(int b,int y ,float r);
        bankdeposite(int b,int y ,int r);
        void printdetails();
};

bankdeposite :: bankdeposite(int b , int y , float r)
{
    balance = b; years = y; rate = r;
    returnvalue = balance;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1+rate);
    }
}
bankdeposite :: bankdeposite(int b , int y , int r)
{
    balance = b; years = y; rate = float(r)/100;
    returnvalue = balance;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1+rate);
    }
}
void bankdeposite :: printdetails()
{
    cout<<"Your balance is "<<balance<<" after "<<years<<" years your deposite will be "<<returnvalue<<endl;
}

int main()
{
    int b , y;
    int r1;
    float r2;
    cout<<"Enter your amount of deposite : ";
    cin>>b;
    cout<<"Enter years of deposite : ";
    cin>>y;
    cout<<"Enter rate : ";
    cin>>r1;
    bankdeposite b1(b,y,r1);
    b1.printdetails();

    cout<<"Enter your amount of deposite : ";
    cin>>b;
    cout<<"Enter years of deposite : ";
    cin>>y;
    cout<<"Enter rate : ";
    cin>>r2;
    bankdeposite b2(b,y,r2);
    b2.printdetails();
    return 0;
}
