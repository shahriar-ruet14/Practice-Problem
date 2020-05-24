#include<bits/stdc++.h>
using namespace std;

#define sc1(a)scanf("%d",&a)
int main()
{
    int t;
    sc1(t);
    int a,s,sum=0;
    for(int i =1; i<=t; i++)
    {

        sum =0;
        sc1(a);

       for(int j =0; j<a; j++)
        {
            sc1(s);
           if(s>0) sum = sum+s;
        }
        printf("Case %d: %d\n",i,sum);
    }

}
