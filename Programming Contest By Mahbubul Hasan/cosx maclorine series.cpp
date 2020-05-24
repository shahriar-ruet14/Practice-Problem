#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n<=1)
        return 1;
    return n*fact(n-1);
}

int main()
{
    double x =1.57;    int n =5;    //cout<<fact(n);
      double sum =0;
    double temp=0;
    for(int i =0 ; i< n; i++)
    {   temp = (pow(x,n*2)/fact(n*2));
        if(n%2 == 0)
            sum= sum + temp;
        else
            sum =sum - temp;
    }
    cout<<1+sum<<endl;
}
