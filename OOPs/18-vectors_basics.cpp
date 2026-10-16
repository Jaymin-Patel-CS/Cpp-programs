#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums = {10,20,30}; // this is decliaration and initialization of vector.

    nums.push_back(40); // this method is used to add element in the end of vector.
    nums.push_back(50);

    cout<<"Size of vector : "<< nums.size()<<endl; // this  method is used to find the size of vector.
    
    cout<<"Element at index 2 or position 3 is : "<<nums[2]<<endl; // this is how we can apply indexing same as string.

    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }cout<<endl;

    nums.pop_back(); // this is used to remove the last element form the vector.

    // using c++ logic.
    for (auto num:nums){
        cout<<num<<" ";
    }
    
    return 0;
}
