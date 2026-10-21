#include<iostream>
using namespace std;

class base
{
    protected:
        int a = 10;  // protected behaves like private but this can be inharited.
    private:
        int b = 20;  // this will never be inherited.
    public:
        int c = 30;  // this is inherited and also be used as per vidibility.
};
class derived : protected base
{
    int data;
};

int main()
{
    derived d;
    // cout<<d.a; this will throw error because protected shows behaviour like public in main.
    // but this can be used in the methods of class derived.
    return 0;
}
/*
For a protected member:

                     | Public derivation | Private Derivation | Protected Derivation
1. Private members   | Not Inherited     | Not Inherited      | Not Inherited
2. Protected members | Protected         | Private            | Protected
3. Public members    | Public            | Private            | Protected
*/