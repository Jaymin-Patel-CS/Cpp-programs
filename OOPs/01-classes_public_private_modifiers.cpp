#include<iostream>
using namespace std;

class employee
{
    private:
        int current_salary , increment_per_annum , extra_work_payments;  // these are the variables which are private and cant be changed untill the function call of the class' local functions.
    public:
        int working_hours , working_days;  // these are the public variables and can be accessed form anyware in the program.
        void setdata(int a , int b , int c); // this is function initialization to change the private variables.
        void getdata();  // this is the function to print all the data of the class. this is custom made (you can make this for anything.)
};
void employee :: setdata(int a , int b , int c)
{
    current_salary = a;
    increment_per_annum = b;
    extra_work_payments = c;
}
void employee :: getdata()
{
    cout<<"-----------Data Of The Employee-----------";
    cout<<"Current salary is = "<<current_salary<<endl;
    cout<<"increment in salalry per annum is = "<<increment_per_annum<<endl;
    cout<<"extra work payments is = "<<extra_work_payments<<endl;
    cout<<"working hours is = "<<working_hours<<endl;
    cout<<"working days is = "<<working_days<<endl;
}


int main()
{
    int a , b, c;
    cout<<"Enter employee current salary.\n";
    cin>>a;
    cout<<"Enter employee increment per annum.\n";
    cin>>b;
    cout<<"Enter employee extra work payments.\n";
    cin>>c;
    employee Aizen; // Aizen variable is created of the class employee. 
    Aizen.setdata(a,b,c); // formate to use the properties of the calss.
    // Aizen.current_salary = 10000.    this will throw error as current_salary is private variable and they can't be changed without the function call of the class
    Aizen.working_days = 5; // assigning the values to the public variables.
    Aizen.working_hours = 8;
    Aizen.getdata(); // fn call to print all the data.
    return 0;
}
