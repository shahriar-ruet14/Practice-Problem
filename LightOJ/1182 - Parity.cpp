#include<bits/stdc++.h>
using namespace std;


int main(){
int t,c=1,n;
int cnt =0;
cin>>t;
while(t--){
    cin>>n;
    cnt =0;
    cout<<"Case "<<c++<<": ";
    while(n)
    {
        if(n%2 == 1)
            cnt++;
        n=n/2;
    }
    if(cnt%2 == 0)
        cout<<"even"<<endl;
    else
        cout<<"odd"<<endl;
}

}
