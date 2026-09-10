#include<iostream>
using namespace std;

int main()
{
    int rating;
    cout<<"Enter your feed back.";
    cin>>rating;
    switch (rating)
    {
    case 1:
        cout<<"Thanks for feedback, please suggest us the area of improvement."<<endl;
        break;
    case 2:
        cout<<"Thanks for feedback, please suggest us the area of improvement."<<endl;
        break;
    case 3:
        cout<<"Thanks for feedback, please tell what are the pros and cons of our service."<<endl;
        break;
    case 4:
        cout<<"Thanks for feedback, which area take your fifth star for us."<<endl;
        break;
    case 5:
        cout<<"Thanks for giving us excellent feedback."<<endl;
        break;
    default:
        cout<<"give the valid rating."<<endl;
        break;
    }
    return 0;
}
