
#include<bits/stdc++.h>

using namespace std;

string hashFunction(string str)
{
    //cout<<"##################       HASH FUNCTION       ##############"<<endl;
    int hashTable[26] = {0}; ///this
    //cout<<str<<endl;
    for(int i = 0; i< str.size(); i++)
    {
        if( hashTable[ str[i] -'A' ] == 0  && hashTable[ str[i] - 'A'] > 100)
            hashTable[ str[i]-'A' ]=1;
        else
            hashTable[str[i]-'A']= hashTable[str[i]-'A']+1;
    }
        string s = "";
    for (int i = 0; i < 26; i++) {
        s = s + (char)(hashTable[i]+'0');
    }
    return s;

}




bool isCompare(string &window, string hashT)
{
       // cout<<"##################       Compare       ##############"<<endl;

    //cout<<"Window :"<<window<<endl;
    string hashWindow = hashFunction(window);

   /*for(int i =0 ; i< 26; i++)
        cout<<hashWindow[i]<<" ";
        cout<<endl;
      for(int i =0 ; i< 26; i++)
        cout<<hashT[i]<<" ";
cout<<endl;*/


    for(int i =0; i< 26; i++)
    {
        if(hashT[i]> '0')
        {
            if(hashWindow[i] < hashT[i])
            {

                return false;
            }
        }
    }

    return true;
}

int minSubstring(string &S, string &T)
{
        cout<<"##################       Min SubString      ##############"<<endl;

    int minSize =9999999;
    int lp =0, rp = T.size();
    string hashT = hashFunction(T);
        /*for(int i =0 ; i< 26; i++)
        cout<<hashT[i]<<" ";
*/

    while(lp < (S.size() - T.size()) && rp<S.size())
    {
        string window = S.substr(lp,rp-lp);
       // cout<<"Window "<<window<<endl;
        if(isCompare(window, hashT))
        {
            if(minSize > window.size())
                minSize = window.size();
               // cout<<"Temp "<< minSize<<endl;
            lp++;

        }
        else rp++;

    }
    return minSize;
}


int main()
{
    string S = "ABDOoOOOCABECODEBANCABAC", T = "ABCA";


    cout<<"\nOutput: "<<minSubstring(S,T);
}
