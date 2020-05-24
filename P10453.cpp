#include<bits/stdc++.h>
using namespace std;
///############################ MD. SHAHRIAR MAHMUD ############################
///################################ CSE,RUET'14 ################################
/*

*/


//Global Variables
int m,n;
int  dp[1003][1003];
string nw;
string st,stt;

int fun(int i, int j)
{
    if(i == n)  return m-i;
    if(j == m)  return n - j;

    int r1=3333333, r2 = 333333, r3 = 3333333;

    if(dp[i][j] != -1) return dp[i][j];

    if(st[i] == stt[j]) r1 = fun(i+1,j+1);

    else
    {
        r2 = 1+fun(i+1,j);
        r3 = 1+fun(i,j+1);
    }
    return dp[i][j] = min(r1, min(r2,r3));
}
int main()
{


    while(cin>>nw)
    {
        st.clear();
        stt.clear();
        st = stt = nw;
        m = n = nw.size();
        memset(dp, -1 ,sizeof(dp));
        reverse(st.begin(),st.end());
        int res = fun(0,0);
        cout<<res<<endl;

    }

return 0;
}

