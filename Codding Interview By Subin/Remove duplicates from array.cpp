#include<bits/stdc++.h>
using namespace std;

void print(vector<int> arr)
{
     for(int i =0 ; i< arr.size() ; i++)
        cout<<arr[i]<<  " ";
        cout<<endl;
}


///removing duplicate with the the help of a temporary ARRAY
void remove_duplicate(vector < int> arr)
{
    vector<int> duplicate_array;
    for(int i  = 0; i< arr.size(); i++)
    {
        if(arr[i] != arr[i-1])
            duplicate_array.push_back(arr[i]);
    }
    print(duplicate_array);
}


void remove_duplicate_single_array(vector<int> arr)
{
    int index = 0 ;
    for(int i =0; i < arr.size(); i++)
    {
        if(arr[i] != arr[i-1])
            arr[index++] = arr[i];
    }
    print(arr); /// print function should be careful for each index
}
main()
{
    vector<int> arr = {1,2,2,3,3,3,5,6};

    print(arr);
    remove_duplicate(arr);
    remove_duplicate_single_array(arr);




        }
