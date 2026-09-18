#include<iostream>
#include<string.h>
using namespace std;

typedef struct employee
{
    int id;
    float salary;
    char name[30];
}emp;


int main()
{
    // for normal case we will define variable by this way
    struct employee ptr;
    // here i have defined the variable named ptr.
    // for storing the value in this we can follow this steps.
    ptr.id = 111;
    strcpy(ptr.name ,"Rahul");
    ptr.salary = 111.1;

    // defining by typedef.
    emp a;
    // for assigning value to this;
    a.id = 111;
    strcpy(a.name, "Rakhi");
    a.salary = 222.2;

    cout<<"details of employee no 1 "<<endl;
    cout<<"id = "<<ptr.id<<endl;
    cout<<"name = "<<ptr.name<<endl;
    cout<<"salary = "<<ptr.salary<<endl;
    cout<<"details of employee no 2 "<<endl;
    cout<<"id = "<<a.id<<endl;
    cout<<"name = "<<a.name<<endl;
    cout<<"salary = "<<a.salary<<endl;

    
    return 0;
}
