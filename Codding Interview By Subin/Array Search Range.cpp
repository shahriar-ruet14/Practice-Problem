/* Find inside a sorted array and return the id
if not found then return the possition where it should be
    */
#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &arr)
{
    for(int i =0 ; i< arr.size() ; i++)
        cout<<arr[i]<<  " ";
    cout<<endl;
}

vector<int> searchRange(vector<int> & data, int key)
{
    vector <int> range(2);
    range[0]=range[1] = -1;
    int l = data.size();
    int left =0, right =l-1,mid;
    while(left<= right)
    {
        mid = (left+right)/2;
        if(data[mid]  == key)
        {
            range[0] = mid;
            right = mid-1;
        }
        else
        {
            if(data[mid] < key)
            {
                left = mid+1;
            }
            else
            {
                right = mid-1;
            }
        }
    }

    if(range[0] == -1)  return range;

    left = range[0], right = l-1;
    while(left <= right)
    {
        mid = (left+right)/2;
        if(data[mid]==key)
        {
            range[1] = mid;
            left = mid+1;
        }
        else   if(data[mid] > key ) right = mid-1;
                else left = mid+1;
    }




    return range;
}



int main()
{
    vector<int> data {1,2,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,6,7,7,8,9,11,11,15};

    sort(data.begin(), data.end());
    print(data);


    int key = 4;
    vector<int> range = searchRange(data,key);
    cout<<"Output Range"<<endl;
    print(range);



}
