#include<bits/stdc++.h>
using namespace std;

int par[26],rank[26];


void makeset(int n)
{

        par[n] = n;
        rank[n] =0;
    return;
}

int Find(int r)
{
    if(par[r] == r) return r;

    return Find(par[r]);
}



int main()
{
    int t,n,ans;
    scanf("%d\n\n",&t);
    string s; ///will receive input continuously until a '\n'
    char c; ///to take the first input char parent
    for(int i =0 ; i< t; i++)
    {
        getline(cin,s);
        n = s[0] -'A'+1; /// first
        ans =n;
        for(int i =0 ; i<n ; i++)
        makeset(i); ///to index from 1 to 26

        while(true)
        {
            if(!getline(cin,s) || s.empty()) break;

            x = s[0] - 'A';
            y = s[1] - 'A';

            if(Find(x) != Find(y)){

            }
        }
    }
}
