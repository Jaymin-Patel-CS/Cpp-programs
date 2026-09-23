#include<iostream>
using namespace std;

// let us assume we have to enter somthing critical value like the address of original string which we dont want to change 
// but accidently the programer did this then this will give undesired output.
// to avoid this the const variable or constant argunment is arrived .
// if we defined that address with const in function then compiler will never change this value . 
// the accident can't occurs.
// example : 
void x(const char *a)
{
    printf("%s",a);
}

int main()
{
    char a[] = "hello"; // This is our original string
    x(a);
    // this is only the sample and this not even the real example 
    // this is for only to show how to use const.
    return 0;
}
