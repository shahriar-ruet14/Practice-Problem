#include<bits/stdc++.h>
using namespace std;


main()
{
    int i=0,j=0,k=0,l=0;
    char text[] = "I love Codding";
    char temp[20];
    cout<<text<<endl;
    int s= strlen(text);
    cout<<s;
    for(i =0 ; i<s; i++)
    {
        if(text[i] == '\0' || text[i] == ' ')
        {
            for(j = i-1; j>=1;j--)
                cout<<text[j];
            cout<<" ";
            l =i+1;
        }
    }
}
