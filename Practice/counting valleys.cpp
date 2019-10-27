#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char s;



        int pointer = 0;
        int valley =0;
        cin>>n;

        for(int i =0; i< n; i++)
        {
            cin>>s;

            if(s == 'D')
                pointer++;
            else
                pointer--;
            if(pointer == 0 && s=='U') valley++;


        }
        cout<<valley<<endl;



    return 0;
}
