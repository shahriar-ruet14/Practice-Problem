#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a[1000009];
    int d,n,temp;
    cin>>n>>d;
    for(int i =0 ; i< n; i++){
        int temp = n-d+i;
            cin>>a[temp];
    }
     for(int i =0 ; i< n; i++) cout<<a[i]<<" ";


    return 0;
}


