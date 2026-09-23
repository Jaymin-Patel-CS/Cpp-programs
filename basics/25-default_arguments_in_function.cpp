#include<iostream>
using namespace std;

// simpally default argument are the predefine values in function
// which can be overwrited if  needed but if not entered it will run the preassigned value.

int accprofit(int balence , float factor = 1.04 /*here factor is default variable.*/)
{
    // factor can be overwrited if entered during function call
    // if not entered factor will remain 1.04
    return balence *= factor;
}

int main()
{
    int balence = 100000 , status;
    cout<<"Enter your status"<<endl<<"For normal enter 1"<<endl<<"For VIP enter 2"<<endl;
    cin>>status;
    switch (status)
    {
    case 1:
        cout<<"If your current balence is "<<balence<<" and your balence after 1 year will be "<<accprofit(balence)<<endl;
        break;
    case 2:
        cout<<"If your current balence is "<<balence<<" and your balence after 1 year will be "<<accprofit(balence,1.1)<<endl;    
        break;
    }
    
    return 0;
}
