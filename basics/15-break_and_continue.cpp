#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout<<i<<endl;
        if (i==3)
        {
            break;  // break helps us to break/exit from the loop on given condition.
        }    
    }
    for (int i = 0; i < 5; i++)
    {
        if (i==3)
        {
            continue; // after this function , next commant doesn't performed and loop will be shifted to the next condition.
            // like here only 3 will not be printed.
        }
        cout<<i<<endl;
    }
    
    return 0;
}
