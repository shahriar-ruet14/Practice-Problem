#include<bits/stdc++.h>
using namespace std;
#define Max 256

string RemoveSpaces(string s)
{
s.erase(remove(s.begin(),s.end(),' '),s.end());
return s;

}

bool Compare( string s1, string s2)
{

    s1 = RemoveSpaces(s1);
    s2 = RemoveSpaces(s2);
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1==s2;

}




int main()
{

   int t=0;
   cin>>t;
   while(t--)
   {
       string s;
       vector<string>words;
       while(getline(cin,s)and s.length())
           words.push_back(s);
           sort(words.begin(),words.end());

        for( int i =0 ; i<words.size(); ++i)
        {
            for(int j =i+1; j<words.size(); ++j)
            {
                if(Compare(words[i],words[j]))
                    cout<<words[i]<<" = "<<words[j]<<"\n";
            }
        }
        if(t)
            cout<<endl;

   }
    return 0;

}

