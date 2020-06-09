#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

#define PI acos(-1)

int main()
{
    int i,test,r1,r2,h,p;
    double R,V;
    cin>>test;
    for(i=1;i<=test;i++)
    {
        cin>>r1>>r2>>h>>p;
        R= r2 + (r1-r2)*(double(p)/h);
        V = 1/3.0 * PI * p *( R*R + R*r2 + r2*r2 );
        printf("Case %d: %lf\n",i,V);
    }
    return 0;
}

