#include<iostream>
using namespace std;

// here the memory allocation works as follows.
// the common memory is shared in between the things which are common in all the future variables created of class.
    /*for example : member functions of the calss*/
// and the diffrent variables like a.itemid[1] get the saparate memory for all the variables of the call.
    /*for example : a.itemID[0] and b.itemID[0] will get the separate memory*/

class item
{
    private:
        int itemID[100];
        int itemprice[100];
        int counter = 0;
    public:
        void inputITEM();
        void displayITEM();
};
void item :: inputITEM()
{
    cout<<"Enter your item id of item number "<<counter+1<<endl;
    cin>>itemID[counter];
    cout<<"Enter your item price"<<endl;
    cin>>itemprice[counter];
    counter++;
}
void item :: displayITEM()
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"Item number "<<i<<" with id "<<itemID[i]<<" and price "<<itemprice[i]<<endl;
    }
}

int main()
{
    int no_item;
    cout<<"Enter the value of unique items you have to take."<<endl;
    cin>>no_item;
    item a;
    for (int i = 0; i < no_item; i++)
    {
        a.inputITEM();
    }
    a.displayITEM();
    return 0;
}