#include<iostream>

using namespace std;

int c = 100;

int main()
{
    int a, b, c;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;
    c = a+b;
    cout<<"The vlaue of c is "<<c<<endl; // This is the value of local variable.
    // if want to print the value of global variable c than we use this operator
    // '::'
    cout<<"The vlaue of c global is "<<::c<<endl;

    // the case of double and float.
    /*float d = 3.4*/ 
    //here the we have defined d in float yet
    // when we pass this to function, the passed value will be in double.
    // to avoid this we use 'f' in end of the value like this:
    float d = 3.4f;
    // in similar fashion we can use 'l' at the end of the value to specify double.like this
    long double e = 3.4l; // we can also use 'L' for this.
    cout<<"The value of d is "<<d<<endl;
    cout<<"The value of e is "<<e<<endl;
    cout<<endl;
    cout<<"This is the comparision of memory size of diff diff datatypes of decimal value."<<endl;
    cout<<"The size of 3.4 is "<<sizeof(3.4)<<endl; // this is in double form by default.
    cout<<"The size of 3.4f is "<<sizeof(3.4f)<<endl;
    cout<<"The size of 3.4F is "<<sizeof(3.4F)<<endl;
    cout<<"The size of 3.4l is "<<sizeof(3.4l)<<endl;
    cout<<"The size of 3.4L is "<<sizeof(3.4L)<<endl;

    return 0;
}
