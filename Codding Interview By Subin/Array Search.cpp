/* Find inside a sorted array and return the id
if not found then return the possition where it should be
    */
#include<bits/stdc++.h>
using namespace std;
vector<int> data {1,2,3,4,6,7,7,8,9,11,11,15};
void print(vector<int> &arr)
{
    for(int i =0 ; i< arr.size() ; i++)
        cout<<arr[i]<<  " ";
    cout<<endl;
}
int array_search(int key, int left, int right)
{
    cout<<key<<" "<<left<<" "<<right<<endl;
    if(right >= left)
    {
        int mid = (left+right)/2;
        if(mid == left){ /// trap if data not found and need an estimation daa position

         cout<<key<<" is pretend to be in ";
            return right;
        }
        if(data[mid] == key ) return mid;
        if(data[mid] > key)
            return array_search(key, left,mid);
        else

            return array_search(key, mid, right);


        return -1;
    }


}

int main()
{

    print(data);
    sort(data.begin(), data.end());
    print(data);

    /// cout<<binary_search(data.begin(),data.end(), 15);

    int key;


    while(1)
    {
        cout<<"\nEnter a key to search    :";
        cin>>key;

        cout<<"\n Index :"<<array_search(key,0,data.size()-1);
    }
}
