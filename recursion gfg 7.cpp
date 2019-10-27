#include<bits/stdc++.h>
using namespace std;



int fun ( int n, int *fp )
{
    int t, f;

    if ( n <= 1 )
    {
        *fp = 1;
        return 1;
    }
    t = fun ( n-1, fp );
    f = t + *fp;

    *fp = t;
     cout<<"f  = "<<f<<"\t t   = "<<t<<"\t  fp = "<<*fp<<endl;

    return f;
}

int main()
{
    int x = 30;
    printf("%d\n",fun(9, &x));

    return 0;
}
