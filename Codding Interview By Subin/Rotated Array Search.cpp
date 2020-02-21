#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &arr)
{
    for(int i =0 ; i< arr.size(); i++)
        cout<<arr[i]<<  " ";
    cout<<endl;
}

int search_rotate(vector<int> &data, int key)
{
    int l = 0, r = data.size()-1,mid;
    while(l <= r )
    {
        mid = (l+r)/2;
        if(data[mid]== key)
            return mid;
        ///specifying the order and presence in that range
        if(data[l] < data[mid] && key< data[mid] && key >= data[l])
            r = mid-1;
        else ///otherwise
            ///specifying the next  second half order and presence in that range
            if(data[mid]<data[r]&& key>data[mid] && key <= data[r])
                l = mid+1;
            else /// both otherwise
                /// if  don't have order in the range
                if(data[l]> data[mid])
                    r = mid-1; /// step to go specific range
                else /// otherwise go for second half
                    l = mid+1;


    }
     return false;
}


int main()
{
     vector<int> data {7,8,9,10,1,2,3,4,5,6};

    //sort(data.begin(), data.end());
    print(data);
    int key =6;
    cout<<key<<" is found at index "<< search_rotate(data, key)<<endl;

}
