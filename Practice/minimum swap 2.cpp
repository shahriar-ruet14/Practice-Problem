#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    int arr[100009];
    cin>>n;
    for(int i =0 ; i< n ; i++) cin>>arr[i];
    int c=0,j;
    for(int i =0 ; i< n ; i++)
    {
        j=i;
        if(arr[j] != i+1)
        {
            while(arr[j]!=i+1)
                j++;

            swap(arr[i],arr[j]);
            c++;
        }

    }
    cout<<c<<endl;

    return 0;
}
