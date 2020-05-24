#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    char c;
    int k=0;
    while(true)
    {
        c = getc(stdin);
        if(c=='\n') break;
        if(c=='!') ++k;
    }
    //cout<<k<<endl;
    int ans =1;
    while(n>0)
    {
        ans*=n;
        n-=k;

    }
    cout<<ans<<endl;
}
