#include<bits/stdc++.h>
using namespace std;
///############################ MD. SHAHRIAR MAHMUD ############################
///################################ CSE,RUET'14 ################################
/*

*/
int main()
{
    string s1="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    string s2="A   3  HIL JM O   2TUVWXY51SE Z  8 ";


    map<char,char> dict;
    int l = s1.size();
    for(int i = 0; i<l;i++) dict[s1[i]] = s2[i];

    bool palindrome, mirror;
    char inp[21];
    while( cin>>inp )
    {
        palindrome = mirror = 1;
        l = strlen(inp);
        for(int i = 0; i <= l/2; i++)
        {
            if(inp[i] != inp[l-i-1]) palindrome = 0;
            if(dict[inp[i]] != inp[l-i-1] ) mirror =0;
        }


         if(palindrome && mirror) cout<<inp<<" -- is a mirrored palindrome.\n\n";
            else if(palindrome && !mirror) cout<<inp<<" -- is a regular palindrome.\n\n";
                else if(!palindrome && mirror) cout<<inp<<" -- is a mirrored string.\n\n";
                    else cout<<inp<<" -- is not a palindrome.\n\n";
    }



return 0;
}

