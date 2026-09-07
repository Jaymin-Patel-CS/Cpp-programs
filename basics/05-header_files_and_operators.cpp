// There are two types of header files.like
// 1. system headerfiles : comes with compiler
#include<iostream>
// 2. user defined header files.like
// #include "this.h" --> this will produce the error if this.h file is not present in this directory.
using namespace std;

int main()
{
    int a=4 , b=3;
    cout<<"i am ...";
    cout<<"here are the type of arithematic operators."<<endl; // endl is used to define a new line at the end of the line.
    // Arithematic operators.
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl; // here the output will be an integer cuz we had taken the integers as an operands.
    cout<<"The value of a%b is "<<a%b<<endl; // this is used for remainder output.
    cout<<"The value of a++ is "<<a++<<endl; // this will print first and than increment it.
    cout<<"The value of a-- is "<<a--<<endl; // this will print first and than decrement it.
    cout<<"The value of ++a is "<<++a<<endl; // this will increment first and than print it.
    cout<<"The value of --a is "<<--a<<endl; // this will devrement first and than print it.
    cout<<endl<<endl;
    // assignment operators. --> used to assign value to variables.
    //int a=0,b=5;
    // char d='d

    // comparision operators.
    cout<<"Here are the comparision operators.";
    cout<<"The vlaue of a==b is "<<(a==b)<<endl;
    cout<<"The vlaue of a!=b is "<<(a!=b)<<endl; // this symbolize not epuals to
    cout<<"The vlaue of a>=b is "<<(a>=b)<<endl;
    cout<<"The vlaue of a<=b is "<<(a<=b)<<endl;
    cout<<"The vlaue of a>b is "<<(a>b)<<endl;
    cout<<"The vlaue of a=< is "<<(a<b)<<endl;

    // logical operators.
    // 1. && --> this is and operator.
    // 2. || --> this is or operator.
    // 3. !  --> this is not operator.
    //  these can be used in the same fashion as we have used these all in sets(mathematics).

    return 0;
}
