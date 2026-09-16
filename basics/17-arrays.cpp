#include<iostream>
using namespace std;

int main()
{
    // arrays are the continuous blocks of variables of same kind of datatype. 
    // when we have to make the variables in large amount for the same subject or 
    // when we have to make the variables of the same kind.
    int marks[4];
    // we can initialixe this as below.
    marks[0] = 1;
    marks[1] = 1;
    marks[2] = 1;
    marks[3] = 1;
    cout<<"printing marks array."<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    
    // the counting of the element of array always starts with 0.

    // second way of initilization of array.
    int abc[] = {1,2,3};
    cout<<"printing abc array."<<endl;
    cout<<abc[0]<<endl;
    cout<<abc[1]<<endl;
    cout<<abc[2]<<endl;

    // printing the array by the loops.
    cout<<"printing marks array by loop."<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<marks[i]<<endl;
    }
    
    return 0;
}
