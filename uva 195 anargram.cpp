#include<bits/stdc++.h>
using namespace std;

bool Comparator(char ch1,char ch2)
{
    if(tolower(ch1) == tolower(ch2))
        return ch1<ch2;
    return tolower(ch1) < tolower(ch2);
}

int main(void)
{
    int t;
    cin>>t;


    while(t--)
    {
        vector<char>word;
        string s;
        cin>>s;
        for(int i =0 ; i< s.size(); i++)
            word.push_back(s[i]);

        sort(word.begin(),word.end(),Comparator);
        do
        {
            for(int i=0 ; i< word.size(); i++)  cout<<word[i];
            printf("\n");
        }
        while(next_permutation(word.begin(), word.end(),Comparator));  /// There is a STL named next_permutation which successfully generate all combination of permutation.


    }

    return 0;


}







