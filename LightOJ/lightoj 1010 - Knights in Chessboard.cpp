#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define sc1(a)scanf("%lld",&a)
#define pr(a)printf("%lld",a)

int main()
{
    ll t;
    sc1(t);
    ll row, col,big;
    for(ll i=1 ; i<= t ; i++){
            sc1(row);sc1(col);
        printf("Case %lld: ",i);

    ll ans = row*col;
    if(row == 1 || col ==1) pr(max(col,row));
    else
    if(row == 2 || col ==2){
            big =max(row,col);
            ans = big;
        if(big%4 == 1|| big%4 ==3) ans++;
        else if(big%4 ==2) ans+=2;
        pr(ans);
    }
    else
        if(ans%2 == 1) pr(ans/2+1);
    else
        pr(ans/2);
        printf("\n");
    }

}
