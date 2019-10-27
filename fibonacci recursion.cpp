
#include<bits/stdc++.h>
using namespace std;

long fibo(int n)
{
    if(n == 0 || n ==1)
        return n;
    else
        return fibo(n-1)+fibo(n-2);
}
main()
{
    long n;
    while(1)
    {
        cout<<"Enter"<<endl;
        cin>>n;
        cout<<fibo(n)<<endl;
    }
}
