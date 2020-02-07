#include<bits/stdc++.h>
using namespace std;
inline string RemoveSpaces(string s)
{
	s.erase(remove(s.begin(), s.end(), ' '), s.end());
    return s;
}


inline bool Compare(string s1, string s2)
{
    s1= RemoveSpaces(s1);
    s2= RemoveSpaces(s2);

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return s1 == s2;

}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    cin.ignore();
    cin.ignore();



    while(t--)
    {
        string s;
        vector<string>word;
        while(getline(cin,s)and s.length())
        {

            word.push_back(s);
        }

        sort(word.begin(), word.end());
        // cout<<word;

        for(int i =0 ; i< word.size(); ++i)
        {
            for( int j = i+1; j< word.size(); ++j)
            {
                if(Compare(word[i],word[j]))
                    cout<<word[i]<<" = "<<word[j]<<"\n";


            }

        }

        if(t)   cout<<"\n";
    }

return 0;
}
