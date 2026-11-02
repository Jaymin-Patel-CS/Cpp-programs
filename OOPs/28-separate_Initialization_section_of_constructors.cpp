#include<iostream>
using namespace std;

// NOTE : here the initilization of the variables must be in the sequence of defination of them in the class.
// means here 'a' must be initilized before 'b'
class abcd
{
    int a , b;
    public :
        abcd(int x , int y) : a(x) , b(y)
        {
            /* block of code of constructor.*/
            cout<<"the initilized value of a is "<<a<<endl;
            cout<<"the initilized value of b is "<<b<<endl;
        }
};

int main()
{
    abcd object1(2,3);
    return 0;
}
