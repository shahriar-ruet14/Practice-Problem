#include<bits/stdc++.h>
using namespace std;
/*
	Shahriar_143113, RUET
*/
double r1 =0,r2=0,h =0;
#define pi acos(-1)
#define area (pi*h*(pow(r1,2)+pow(r2,2) + r1*r2))/3
int main()
{
  double p;
  int T;
  cin>>T;
  for(int i =1 ; i<=T ; i++)
  {
      cin>>r1>>r2>>h>>p;
      /*r1=5;
      r2=2;
      h=3;
      p=2;*/
      r1 = r2+p*(r1-r2)/h;
      //cout<<r1<<endl;
      h=p;
      printf("Case %i: %lf\n",i,area);
  }
return 0;
}

