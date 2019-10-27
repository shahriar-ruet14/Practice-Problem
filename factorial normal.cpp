#include<bits/stdc++.h>
using namespace std;


main()
{
    cout<<"Enter"<<endl;
    int n;

    cin>>n;
    int result = n;
    while(n>1)
    {
        result = result *(n-1);
        n--;


    }
    cout<<result<<endl;
}

