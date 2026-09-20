#include<iostream>
using namespace std;

union money   // union helps us to access only one variable form the this set . 
              // this helps us to mannage our memory in more better way.
{
    int rupee;
    char card;
    float euro;
};

int main()
{
    union money m1; // here we have created the variable named m1.
    m1.rupee = 10;  // here we have accessed the rupee in m1 and in m1 the 10.00 have stored.
    cout<<"The value of m1 before overwritting with m1.card = "<<m1.rupee<<endl;
    m1.card = 'a'; // here we have accessed the pound in m1 and tried to overwrite the m1.rupee with the value 20.00
    cout<<"The value of m1 after trying to overwrite with m1.card = "<<m1.rupee<<endl;
    // in the you can see the value of m1.rupee is overwrited by the acaii value of charater 'a'

    // simpley we can only access the one variable at a time form the union.
    return 0;
}
