#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    int pos, lift;
    cin>>t;
    for(int i =1; i<=t;i++)
    {
        cin>>pos>>lift;
        cout<<"Case "<<i<<": ";
        if(lift>pos)
        cout<<19+lift*4;
        else
            cout<<19+4*(pos+pos-lift);
        cout<<endl;

    }
}
