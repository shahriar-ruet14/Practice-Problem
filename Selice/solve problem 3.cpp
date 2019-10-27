#include<bits/stdc++.h>
using namespace std;

main()
{
    char S[100], temp[100];

    int N,K,test;
    /*cin>>N;
    for(int i = 0; i<N; i++)
    {
        cin>>S[i];
    }
    //cin>>K;
    K=2
    //cout<<S;
    */
    K=2;
    N=3;

    S[0]='A';
    S[1]='B';
    S[2] = 'Z';
    for(int i=0; i< N; i++)
    {
        //printf("%i %i",S[i],'A');
        if(S[i]>='A' && S[i]<='Z')
        {
            //cout<<"from conditon";

            K = K%26;

            temp[i]= S[i]+K;

            if(temp[i] > 'Z')
            {
                test = temp[i]-'Z';
                temp[i]='A'+ test-1;
            }
        }
        else{
            temp[i] = S[i];
        }
    }
    for(int i = 0; i<N; i++)
        printf("%c  ",temp[i]);


}
