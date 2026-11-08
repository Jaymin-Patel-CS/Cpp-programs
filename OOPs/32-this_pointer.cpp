#include<iostream>
using namespace std;

// this is the keyword which is used as pointer variable of the object by which the memberfunction is called.

class abcd
{
    int a ; 
    public: 
        void set_a (int a)
        {
            this->a = a; // see here we have used this as we have used ptr in file no. 31
            // here we can also use this to return the pointer value of the object which had called the memberfunction.
        }
        void get_a ()
        {
            cout<<"The value of a is "<<a<<endl;
        }
};

int main()
{
    abcd AAA;
    AAA.set_a(12);
    AAA.get_a();
    return 0;
}
