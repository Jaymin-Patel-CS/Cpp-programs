#include<iostream>
using namespace std;


class employee
{
    private:
    int id;
    static int count ;
    public:
    void setid();
    void getid();
    static void getcount(); // this is the static function , the functions which only deals with ststic variables.
};
int employee::count; // this is called static variable.
// by default ststic variable initialized to 0.
// if we want to initialize it with any integer.
// we can initilizw it here not in class.

void  employee :: setid()
{
    cout<<"Enter employee id of employee number "<<count+1<<endl;
    cin >> id;
    count++;
}
void employee:: getid()
{
    cout<<"The id of employee number "<<count<<" is "<<id<<endl;
}
void employee:: getcount()
{
    // here if we try to use normal varibles it will throw error .
    cout<<"The value of count is "<<count<<endl;

}
int main()
{
    employee e1,e2,e3;
    e1.setid();
    e1.getid();
    employee::getcount();
    e2.setid();
    e2.getid();
    employee::getcount();
    e3.setid();
    e3.getid();
    employee::getcount();
    return 0;
}
