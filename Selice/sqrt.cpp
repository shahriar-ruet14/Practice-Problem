#include<stdio.h>

#define ll long long
#define EPSILON 0.00000000001

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
    scanf("%lf",&a);
    printf("%0.8lf\n",squrt(a));
    return 0;
}

