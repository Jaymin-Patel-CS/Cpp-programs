#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    int a=10;
    int *ptr = arr; 
    // we are going to use pointers!!
    // same as we have used in the c language...
    for (int i = 0; i < a; i++)
    {
        cout<<(*ptr)<<endl;
        ptr++; // or we can use (ptr = ptr + 1)
    }
    
    return 0;
}
