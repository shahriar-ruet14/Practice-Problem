#include<bits/stdc++.h>
using namespace std;
///############################ MD. SHAHRIAR MAHMUD ############################
///################################ CSE,RUET'14 ################################
/*

*/


bool isPalindromeNaive(int n)
{   int a=n;
    int temp = 0;
    while(n != 0 )
    {
        temp = temp*10;
        temp = temp + n%10;

        n = n/10;
    }
    if(temp == a)
        return true;
    return false;

}
// A utility for creating palindrome
int c =0;
int createPalindrome(int input, int b, bool isOdd)
{
    int n = input;
    int palin = input;

    c++;
    // checks if number of digits is odd or even
    // if odd then neglect the last digit of input in
    // finding reverse as in case of odd number of
    // digits middle element occur once
    if (isOdd)
        n /= b;

    // Creates palindrome by just appending reverse
    // of number to itself
    while (n > 0)
    {
        palin = palin * b + (n % b);
        n /= b;
    }
    return palin;
}

// Function to print decimal palindromic number
void generatePalindromes(int n)
{
    int number;

    // Run two times for odd and even length palindromes
    for (int j = 0; j < 2; j++)
    {
        // Creates palindrome numbers with first half as i.
        // Value of j decided whether we need an odd length
        // of even length palindrome.
        int i = 1;
        while ((number = createPalindrome(i, 10, j % 2)) < n)
        {// cout<<"i "<<i<<endl;
            cout << number << " ";
            i++;
        }
    }
}

int main()
{
    int n;
        while(scanf("%d",&n))
        {
           // cout<<isPalindromeNaive(n)<<endl;

            generatePalindromes(n);
            cout<<endl<<c;
            c =0;

        }
return 0;
}



