#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a;
    int arr[100];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int c = 0,counter =0;
    while(c <n)
    {
        if(arr[c] == arr[c+1]){
        c=c+2;
        counter++;
        }
        else
            if(arr[c] != arr[c+1])
            {
                c++;
            }


    }
    int pair_s=0;

    cout<<counter <<endl;



}
