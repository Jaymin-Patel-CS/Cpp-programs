#include<iostream>
using namespace std;

// the virtual keyword before the base class is used to avoid two variable ambiguity when the same inherited variable again inherited in same class twice.

class Student
{
    protected :
        int roll_number;
    public :
        void set_rollnumber(int a){roll_number = a;}
        void print_rollnumber(void){cout<<"Rollnumber : "<<roll_number<<endl;}
};

class test : virtual public Student
{
    protected :
        int maths , science;
    public :
        void set_marks(int a,int b){maths = a;science = b;}
        void print_marks(void){cout<<"mathematics marks : "<<maths<<endl<<"science marks : "<<science<<endl;}
};

class sports : virtual public Student
{
    protected :
        int score;
    public :
        void set_score(int a){score = a;}
        void print_score(void){cout<<"PT sports score  : "<<score<<endl;}
};

class result : public test, public sports
{
    int result;
    public:
        void print_result()
        {
            result = maths + science + score;
            cout<<"Your total result is : "<<result<<endl;
        }
};

int main()
{
    result jjj;
    jjj.set_rollnumber(1111);
    jjj.set_marks(66,77);
    jjj.set_score(9);
    jjj.print_rollnumber();
    jjj.print_marks();
    jjj.print_score();
    jjj.print_result();
    return 0;
}
