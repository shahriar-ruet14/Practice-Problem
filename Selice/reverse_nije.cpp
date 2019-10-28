#include<stdio.h>

#define ll long long
#define EPSILON

double squrt(double val)
{
    double high=val;
    double low=0;
    double mid=0;

    while(high-low>EPSILON)
    {
        mid=low+(high-low)/2;
        if(mid*mid>val)
        {
            high=mid;
        }
        else
        {
            low=mid;
        }
    }
    return mid;

}

int main()
{
    double a;
    printf("%lf",squrt(a));
    return 0;
}
