#include<bits/stdc++.h>
using namespace std;
///############################ MD. SHAHRIAR MAHMUD ############################
///################################ CSE,RUET'14 ################################
/*

*/
bool isPalindromeNaive(long long n)
{
    long long  a=n;
    long long temp = 0;
    while(n != 0 )
    {
        temp = temp*10 + n%10;
        n = n/10;
    }
    return (temp == a)? true:false;

}
long long palindrome(long long n)
{
    long long pal = 0;
    while(n != 0 )
    {
        pal = pal*10 + n%10;
        n = n/10;
    }

    return pal;
}

int main()
{
    long long inp;
    int t,c;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>inp;
        inp += palindrome(inp);
        c++;
        while(!isPalindromeNaive(inp))
        {
            c++;
            inp += palindrome(inp);
        }
        cout<<c<<" "<<inp<<endl;
    }
    return 0;
}


