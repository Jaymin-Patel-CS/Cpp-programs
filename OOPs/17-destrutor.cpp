#include<iostream>
using namespace std;

// destructor donot take value or return any value.

class num
{
    public:
        num()
        {
            cout<<"Constructor called."<<endl;
        }
        ~num()
        {
            cout<<"Destructor called."<<endl;
        }
};

int main()
{
    num n1;
    cout<<"Creating object n1"<<endl;
    {
        cout<<"In destructor block"<<endl;
        num n2;
        cout<<"exiting block"<<endl;
    }
    cout<<"the object of destructor block is destroyed"<<endl;
    return 0;
}
