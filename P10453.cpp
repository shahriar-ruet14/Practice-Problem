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
void path(int i,int j)
{
    if(i==n)
    {
        for(int k=j; k<m; k++)
            cout<<stt[k];
        return ;
    }
    if( j==m )
    {
        for(int k=i; k<n; k++)
            cout<<st[k];
            return ;
    }


    int ret=3333,ret1=3333,ret2=3333,ret3=3333;
    int val = fun(i,j);
    if(st[i]==stt[j])
    {
        ret = fun(i+1,j+1);
    }
    else
    {
        ret2 = 1+fun(i+1,j);
        ret3 = 1+fun(i,j+1);
    }
    if(val==ret)
        {cout<<stt[j];
        path(i+1,j+1);
        }
    else if(val==ret2)
        {cout<<st[i];
          path(i+1,j);
        }
    else{
        cout<<stt[j];
          path(i,j+1);
    }
    //return dp[i][j] = min(ret3,min(ret,ret2));
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
        cout<<res<<" "<<endl;


    }

return 0;
}

