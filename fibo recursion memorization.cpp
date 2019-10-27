
#include<bits/stdc++.h>
using namespace std;


long F[65];
int c =0;

long fibo(long n)
{
    c++;
    if(F[n] != -1)  return F[n];
    F[n] =  fibo(n-1)+fibo(n-2);
    return F[n];
}
main()
{
    long n;
    F[0] =0;
    F[1] = 1;
    for (int i =2 ; i< 60; i++)
    {
        F[i] = -1;
    }
    while(1)
    {
        cout<<"Enter"<<endl;
        cin>>n;
        cout<<fibo(n)<<endl;

        cout<<"iteration    "<<c<<endl;
        c =0;
    }
}
