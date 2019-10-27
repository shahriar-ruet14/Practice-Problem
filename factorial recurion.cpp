#include<bits/stdc++.h>
using namespace std;

long fact(int n)
{
    if(n<= 1)
        return 1;
    else
        return n*fact(n-1);
}
main()
{
   long n;
   while(1){
    cout<<"Enter"<<endl;
    cin>>n;
    cout<<fact(n)<<endl;
   }
}
