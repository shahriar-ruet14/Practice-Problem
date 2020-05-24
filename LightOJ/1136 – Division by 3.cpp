#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int divBy3( int n){
    if(n == 0 )
        return 0;
    int ans = 2*(n/3);
    if(n%3 == 2)
        ans++;
    return ans;
}
int main()
{
   int t,a,b;
    cin>>t;
    for(ll i=1; i<=t; i++)
    {
        cin>>a>>b;
         printf("Case %d: ",i);
         cout<<divBy3(b)- divBy3(a-1)<<endl;

    }

}
