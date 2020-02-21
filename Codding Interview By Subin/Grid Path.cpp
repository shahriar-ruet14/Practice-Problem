#include<bits/stdc++.h>
using namespace std;

int numberOfPaths(int m, int n)
{
    if(m ==1 || n==1)
        return 1;

    return numberOfPaths(m-1,n) + numberOfPaths(m, n-1);
}

int numberOfPath2(int m, int n)
{
    int grid[m][n]; ///to store the result of subproblems
    for(int i = 0; i<m; i++)
        grid[i][0] = 1;
    ///row and colomn set to 1
    for(int  i=0; i<n; i++)
        grid[0][i] = 1;
    for(int i =1; i<m; i++)
    {
        for(int j =1; j<n; j++)
        {
            grid[i][j] = grid[i][j-1]+grid[i-1][j];
        }
    }
    return grid[m-1][n-1];
}

int numberOfPath1D(int m, int n)
{
///create 1D array to store the subproblem
    int dp[n] = {1};
    dp[0] = 1;

    for(int i =0; i<m ; i++)
    {
        for(int j =1; j<n ; j++)
        {
            dp[j] +=dp[j-1];
        }
    }
    return dp[n-1];
}
int fact(int n)
{
    if(n<2)
        return 1;

    return n*fact(n-1);
}
int numberOfPathFormula(int m, int n)
{

    return fact(n-1+m-1)/(fact(n-1)*fact(m-1));
}


int main()
{
    int m =4,n =5;
    //cin>>m>>n;
    cout<<"recursion    :"<<numberOfPaths(m,n)<<endl;
    cout<<"recursion    :"<<numberOfPath2(m,n)<<endl;
    cout<<"recursion  1D   :"<<numberOfPath1D(m,n)<<endl;
    cout<<"\nUsing formula (n-1+m-1)!/((n-1)!*(m-1)!\nrecursion    :"<<numberOfPathFormula(m,n)<<endl;
    return 0;
}
