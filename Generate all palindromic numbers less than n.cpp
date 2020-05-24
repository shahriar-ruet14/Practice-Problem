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
int createPalindrome(int input,int b, bool isOdd)
{
    int n = input;
    int palin = input;
    if(isOdd)
        n= n/b;
    cout<<"input    "<<input<<endl;
    while(n>0)
    {
        palin = palin *b+(n%b);
        n =n/b;

    }
    return palin;
}



void generatePalindromes(int n)
{
    int num;
    for (int j=0; j<2 ; j++)
    {
        int i =1;
        while ( (num = createPalindrome(i,10,j%2)) < n)
        {
            cout<<num<<"   ";
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

        }
return 0;
}


