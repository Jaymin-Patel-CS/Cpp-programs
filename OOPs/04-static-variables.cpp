#include<iostream>
using namespace std;

static int count; // this is called static variable.
// by default ststic variable initialized to 0.
// if we want to initialize it with any integer.
// we can initilizw it here not in class.

class employee
{
private:
    int id;
    static int count ;
public:
    void setid();
    void getid();
    static void getcount();
};

void  employee :: setid()
{
    cout<<"Enter employee if of employee number "<<count+1<<endl;
    cin >> id;
}
void employee:: getid()
{
    cout<<"The id of employee number "<<count+1<<" is "<<id;
}

int main()
{
    employee e1,e2,e3;
    e1.setid();
    e1.getid();
    e2.setid();
    e2.getid();
    e3.setid();
    e3.getid();
    return 0;
}
