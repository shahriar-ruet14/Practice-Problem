#include<bits/stdc++.h>
using namespace std;

int squareRoot(int n) ///with logn complexity of binary search approach
{
    int ans =0,left =0, right =n,mid;
    if(n<2) return n;
    while(left<= right)
    {
        mid = (left+right)/2;
        if(mid <= n/mid)
        {
            left = mid+1;
            ans = mid;
        }
        else
            right = mid-1;

    }
    return ans;

}

double squareRootFloat( int n, int precision)
{
  int left =0 , right =n, mid;
  double ans;
  while(left <= right)
  {
      mid = (left+right)/2;
      if(mid*mid  == n)
      {
          ans  = mid;
          break;
      }
      if(mid*mid < n)
      {
          left = mid+1;
          ans =mid;
      }
      else
        right = mid-1;
  }
  ///to compute the fractional part with the given precision
  double increment = 0.1;
  for(int i =0; i< precision; i++ )
  {
      while(ans*ans <=n)
      {
          ans += increment;
      }
      ///loop terminates when ans*ans < number
      ans = ans - increment;
      increment= increment/10;
  }
return ans;

}





int main()
{
    int n =33, precision = 3;
    cout<<"Only Int Output: "<<squareRoot(n)<<endl;
    cout<<"Output with Precision "<<precision<<" : "<<squareRootFloat(n,precision)<<endl;
}
