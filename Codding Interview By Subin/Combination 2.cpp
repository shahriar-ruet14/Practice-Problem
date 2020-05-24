#include<bits/stdc++.h>
using namespace std;

void comb(int n, int r, int *arr, int sz)
{
    for(int i = n; i>=r; i--)
    {
        arr[r-1] = i;
        if(r>1){
            comb(i-1, r-1, arr,sz);
        }
        else{
            for(int i =0; i< sz; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
}


int main()
{
 int n =5;
 int m = 3;
 int arr[n];
 comb(n,m,arr,m);
}
