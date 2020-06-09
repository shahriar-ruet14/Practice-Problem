#include<bits/stdc++.h>
using namespace std;
/*
	Shahriar_143113, RUET
*/
int main()
{
    int Ax,Ay,Bx,By,Cx,Cy,Dx,Dy;
    int T;
    long long area;
    cin>>T;
    for(int i =1; i<=T; i++)
    {
        cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;
       Dx = Ax + Cx - Bx;
       Dy = Ay + Cy - By;
       area =(long long) Ax*By+Bx*Cy+Cx*Dy+Dx*Ay - Ax*Dy-Dx*Cy-Cx*By-Bx*Ay;
         printf("Case %i: %i %i %llu\n",i,Dx,Dy,area);
    }

return 0;
}

