#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,k;
    char S[100];
    cin>>S;
    cin>>k;
    k = k%26;

    int l = strlen(S);

    int i =0;
    while(i<l)
    {
        if( S[i]<='Z' && S[i]>='A')
            S[i]=  (S[i]- 'A'+k)%26 + 'A';
        else if(S[i]<='z' && S[i]>='a')
            S[i]=  (S[i]- 'a'+k)%26 + 'a';

        i++;

        }
        cout<<endl<<S<<endl;
    }


