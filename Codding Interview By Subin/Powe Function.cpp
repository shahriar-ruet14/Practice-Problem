#include<bits/stdc++.h>
using namespace std;


double powNoSTL(double a, double n ) ///log n complexity
{
    if(n== 0 )  return 1;
    bool nIsPositive = true;
    if(n<0) nIsPositive = false, n *=-1; // to make negatice number positive and set a flag for adjust is
    cout<<n<<endl;
   double result =1;
    while(n)
    {
        int tmp = (int)n; /// double value need to cast becase of reminder returns something else
         if( tmp % 2 == 1)      result *= a, n -=1;
        n = n/2;
        a *=a;
    }
    cout<<result<<endl;
    return     nIsPositive ? result: (1/result); /// if else condition in single line

}
double powNoSTLRecursion(double a, double n)
{
    if( n == 0) return 1;
    if(n < 1) return 1/powNoSTLRecursion(a, -n); ///if n is negative then -n will return positive value
   int tmp = (int)n; /// double value need to cast becase of reminder returns something else
    if(tmp % 2 == 1)  return a*powNoSTLRecursion(a,n-1);
    double x = powNoSTLRecursion(a, n/2);
    return x*x;
}


 main()
{
    double a =100,n =-2;
    cout<<powNoSTL(a,n)<<endl;
    cout<<"Result with Recursion Application "<<powNoSTLRecursion(a,n)<<endl;

}

