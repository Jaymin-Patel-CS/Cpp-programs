#include<iostream>
using namespace std;


int main()
{
    /*loops are used to instruct the repetative work to avoid the same line of codes.*/
    /*like to print the 100 integers. we should not write the 100 lines to print 100 integers.*/
    /*so we use loops*/
    /*loops in cpp*/
    // 1.for
    // 2.while
    // 3.do-while

    // for loop
    //for (initialization; condition ; increment or decrement)
    //{
    //    code goes here
    //}
    cout<<"printed by for loop"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<i<<endl;
    }
    
    //while loop
    // while (condition)
    // {
        //     /* code */
        // }
    cout<<"printed by while loop"<<endl;
    int i = 0;
    while (i<10)
    {
    cout<<i<<endl;
    i++;  // here we have to define increment or decrement manually. 
    }
    // note : we can make the loops infinite. and make them to break in perticular condition.

    // dowhile loop
    int j= 0;
    cout<<"printed by do-while loop"<<endl;
    do  // do wile loop allows you to execute program atleast one time. and then condition will be checked.
    {
        cout<<j<<endl;
        j++;
    } while (j<10);
    
    
    return 0;
}
