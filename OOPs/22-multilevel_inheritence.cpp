#include<iostream>
using namespace std;

class student
{
    protected:
        int roll_number;
    public:
        void set_rollnumber(int a){roll_number = a;}
        int get_rollnumber(void){return roll_number;}
};

class exam : public student
{
    protected:
        int maths,science;
    public:
        void set_marks(int a , int b){maths = a ; science = b;}
        void get_marks()
        {
            cout<<"The maths marks are "<<maths<<endl;
            cout<<"The science marks are "<<science<<endl;
        }
};

class results : public exam
{
    protected:
        int percentage;
    public:
        void display_results()
        {
            cout<<"The RESULT of student with rollnumber "<<roll_number<<endl;
            get_marks();
            cout<<"The percentage obtained are "<<(float(maths)+float(science))/2<<endl;
        }
};


int main()
{
    results jjj;
    jjj.set_rollnumber(123);
    jjj.set_marks(92,94);
    jjj.display_results();

    return 0;
}
