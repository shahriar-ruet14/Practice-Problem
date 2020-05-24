#include<bits/stdc++.h>
using namespace std;
int n,m;
string st,stt,nw;
int dp[1005][1005];
int fun(int i,int j)
{
    if(i==n)
        return m-j;
    if( j==m )
        return n-i;

    if(dp[i][j]!=-1)
        return dp[i][j];

    int ret=3333,ret1=3333,ret2=3333,ret3=3333;

    if(st[i]==stt[j])
    {
        ret = fun(i+1,j+1);
    }
    else
    {
        ret2 = 1+fun(i+1,j);
        ret3 = 1+fun(i,j+1);
    }

    return dp[i][j] = min(ret3,min(ret,ret2));
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
    //freopen("out.txt","w",stdout);
    int t,cas=1;
    scanf("%d",&t);
    while(cin>>nw)
    {
        st.clear();
        stt.clear();
        //nw.clear();

        //cout<<nw<<endl;
        int sz = nw.size();
        st = nw;
        stt = nw;
        n = sz;
        m = sz;
        reverse(stt.begin(),stt.end());
        memset(dp,-1,sizeof(dp));
        int res = fun(0,0);
        printf("%d ",res/2);
        path(0,0);
        printf("\n");
    }
    return 0;
}
