#include <stdio.h>
#include <math.h>
int main()
{
    long long t,k,i,n;
    scanf("%lld",&n);
    for(i =0; i<n; i++)
    {
        scanf("%lld",&k);
        t = (long long)sqrt((unsigned int)(k-1)*2);
        if(t*(t+1)/2 +1 == k) printf("1 ");
        else printf("0 ");
    }
}
