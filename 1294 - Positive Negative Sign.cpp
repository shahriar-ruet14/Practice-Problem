#include<bits/stdc++.h>
using namespace std;
/*
	Shahriar_143113, RUET
*/
int main()
{
    /* Time limit exceed
    int T;
    long long n,m,sum;
    bool flag;
    cin>>T;
    for(int i =1; i<=T; i++)
    {
        cin>>n>>m;
        flag = false;
        sum =0;
        for(long long j = 1; j<=n; j=j+m)
        {
            if(!flag)
            { flag = true;
                for(long long k = j; k <j+m; k++)
                {
                    sum = sum -k;
                   // cout<<"-"<<k;
                }
            }
             else{
                flag = false;
                 for(long long k = j; k < j+m; k++)
                {
                    sum = sum +k;
                    //cout<<"+"<<k;
                }

             }
        }
        printf("Case %i: %llu\n",i,sum);


    }

    */

    /*New efficient Approach
    Consider the example from the problem description:
        -1 -2 -3 +4 +5 +6 -7 -8 -9 +10 +11 +12
    Re-arrange the numbers as follows, which is equivalent:
    (-1 +4) (-2 +5) (-3 +6) (-7 +10) (-8 +11) (-9 +12)
    Now observe what happens
    difference of all parentheses are 3 and total block is 6 (n/2) which is (12/2);
    3*6
    The final formula is (n/2)*m
    */
    int T;
    long long n,m;
    cin>>T;
    for(int i =1; i<=T; i++)
    {
        cin>>n>>m;

        printf("Case %i: %llu\n",i,(n/2)*m);
    }

return 0;

}

