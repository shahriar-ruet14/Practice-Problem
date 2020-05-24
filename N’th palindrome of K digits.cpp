#include<bits/stdc++.h>
using namespace std;


void nthPalindrome(int n ,int k)
{
    //Determine the first half of the palindrome number
    int firstHalf = (k & 1) ? (k/2): (k/2-1);
    int palindrome = (int)pow(10,firstHalf);
     palindrome += n-1;

     ///print the first half
     cout<<palindrome;

     //if k is odd truncate the last digit
     if(k&1)
     {
         palindrome /=10;
     }

     //reverse order print
     while(palindrome)
     {
         cout<<palindrome%10;
         palindrome/=10;
     }

  cout<<endl;



}


// Driver code
int main()
{
    int n = 6, k = 5;
    printf("%dth palindrome of %d digit = ",n ,k);
    nthPalindrome(n ,k);

    n = 10, k = 6;
    printf("%dth palindrome of %d digit = ",n ,k);
    nthPalindrome(n, k);
    return 0;
}
