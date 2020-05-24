#include<bits/stdc++.h>
using namespace std;

#define PI acos(-1)
int main(){
//cout<<PI;
int t;
cin>>t;
double R,r;
int n;
for(int i =1; i<=t; i++)
{
    cin>>R>>n;

    r = (double) (1/(1+sin(PI/n))*R*sin(PI/n));
   printf("Case %d: %.6lf\n",i,r);

}

}
