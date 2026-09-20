#include<iostream>
using namespace std;

int main()
{
    enum name {aaa , bbb,ccc = 100}; // enum helps us to assign the integer constants to the variable defined in this.
    // by default aaa = 0
    // by default bbb = 1
    // we can also assign the costum constant to the variables.like we have done in ccc.
    // ccc = 100
    cout<<"aaa = "<<aaa<<endl;
    cout<<"bbb = "<<bbb<<endl;
    cout<<"ccc = "<<ccc<<endl;
    // enums are  used to make our code more clean and readable.
    return 0;
}
