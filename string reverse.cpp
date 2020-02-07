#include<bits/stdc++.h>
using namespace std;
void reverse_str(char str[] )
{
    int c=0;
    char st[100];
    cout<<str<<endl;
    for(int i = 0 ; i<50; i++)
    {
        if(str[i] != ' ')
        {
            st[c++] = str[i];
        }
        else
        {
            i++;c--;
            while(c >= 0)
            {
                cout<<st[c--];
            }
            c=0;
            cout<<" ";
        }

    }
}

main()
{
    char str[100];
    gets(str);


    reverse_str(str);
}
