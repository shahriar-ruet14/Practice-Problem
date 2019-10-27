#include<bits/stdc++.h>
using namespace std;
bool has[1000];
int fibo(int n)
{
    if(n<2)
        return n;
    else
        return fibo(n-1)+fibo(n-2);
}



int main()
{
    int n =1000;
    while(n>0)
    {
        has[fibo(n)] =true;
        n--;
    }
    cout<<"generation is done"<<endl;
    cout<<"test"<<endl;
    int a;
    cin>>a;
       if(has[a]==true)

           cout<<a<<"is a fibonacci number"<<endl;
}






