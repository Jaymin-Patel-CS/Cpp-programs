#include<iostream>

using namespace std;

int main()
{
    int age;
    cout<<"Enter your age."<<endl;
    cin>>age;
    if (age<1)
    {
        cout<<"you are not born yet."<<endl;
    }else if (age<13)
    {
        cout<<"You cannot come to party."<<endl;
    }
    else if (age>13 && age<18)
    {
        cout<<"you are still kid, you can come to party with the kids pass."<<endl;
    }
    else if (age>18)
    {
        cout<<"you are adult you can come."<<endl;
    }else{
        cout<<"you are not from the earth."<<endl;
    }
    
    
    return 0;
}
