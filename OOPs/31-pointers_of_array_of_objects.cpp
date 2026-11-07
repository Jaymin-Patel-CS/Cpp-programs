#include<iostream>
using namespace std;

class item
{
    int id;float price;
    public:
        void setdata(int a , float b)
        {
            id = a ; price = b;
        }
        void getdata(void){
            cout<<"The id of the item is "<<id<<endl;
            cout<<"The price of the item is "<<price<<endl;
        }
};

int main()
{
    int a ; float b;
    item *ptr = new item[3];
    item *ptrr = ptr;
    for (int i =0;i<3;i++)
    {
        cout<<"Enter the id and price of item no. : "<<i+1<<endl;
        cin>>a>>b;
        ptr->setdata(a,b);
        ptr++;
    }
    for (int i =0 ; i<3 ; i++)
    {
        cout<<"The data of the item no. : "<<i+1<<endl;
        ptrr->getdata();
        ptrr++;
    }
    return 0;
}
