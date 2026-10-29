#include<iostream>
#include<cmath>
using namespace std;

class simple_calc
{
    int a , b;
    public:
        void set_nums_simple()
        {
            cout<<"Enter the value of first number : ";
            cin>>a;
            cout<<"Enter the value of second number : ";
            cin>>b;
        }
        void display_working_simple()
        {
            cout<<"a + b = "<<a + b<<endl;
            cout<<"a - b = "<<a - b<<endl;
            cout<<"a * b = "<<a * b<<endl;
            cout<<"a / b = "<<a / b<<endl;
        }
};
class scientific_calc
{
    int a ;
    public:
        void set_nums_scientific()
        {
            cout<<"Enter the number : ";
            cin>>a;
        }
        void display_working_scientific()
        {
            cout<<"cos(a) = "<<cos(a) <<endl;
            cout<<"sin(a) = "<<sin(a) <<endl;
            cout<<"exp(a) = "<<exp(a) <<endl;
            cout<<"tan(a) = "<<tan(a) <<endl;
        }
};

class hybrid_calc : public simple_calc , public scientific_calc
{

};

int main()
{
    hybrid_calc abcd;
    abcd.set_nums_simple();
    abcd.display_working_simple();
    abcd.set_nums_scientific();
    abcd.display_working_scientific();
    return 0;
}
