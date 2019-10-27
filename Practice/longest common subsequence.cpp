#include <bits/stdc++.h>
using namespace std;


int main()
{
    int i,j;
    char A[1001], B[1001];
    short LCS[1001][1001];

 while(gets(A))
    {
        gets(B);

		memset(LCS, 0, sizeof(LCS));
		int la = strlen(A), lb = strlen(B);

        for( i=1; i <= la ; i++)
        {
            for(j =1 ; j <= lb; j++)
            {
                if(A[i-1] == B[j-1])
					LCS[i][j] = LCS[i-1][j-1]+1;
                else
					LCS[i][j] = max(LCS[i][j-1] ,LCS[i-1][j]);
            }
        }
        cout<<LCS[i-1][j-1]<<endl;
    }
}
/*
abcdgh
aedfhr
*/
