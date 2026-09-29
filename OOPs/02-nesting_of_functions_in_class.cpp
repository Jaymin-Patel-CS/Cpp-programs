#include<iostream>
#include<string>
using namespace std;

// nesting means to use the function in another function.

class binary
{
    private:
        string s;  // private variable.
        void check_binary(); // this is the private function.
    public:
        void read();
        void display_binary();
        void once_complement();
    
};
void binary :: read()
{
    cout<<"Enter your binary expretion.\n";
    cin>>s;
}
void binary ::check_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) !='0' && s.at(i)!='1')
        {
            cout<<"Incorrect expretion in binary.\n";
            exit(0);
        }
    }
}
void binary ::display_binary()
{
    cout<<"expretion is = "<<s<<endl;
}
void binary :: once_complement()
{
    check_binary(); // here the nesting had occured
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i)= '1';
        }
    }
    
}

int main()
{
    binary b;
    b.read();
    b.display_binary();
    b.once_complement();
    b.display_binary();
    return 0;
}
