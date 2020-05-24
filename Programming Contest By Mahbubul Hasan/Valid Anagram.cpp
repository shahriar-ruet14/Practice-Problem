#include<bits/stdc++.h>
using namespace std;
void print(vector<int> vct)
{
    for(int i =0 ; i< vct.size(); i++)
        cout<<vct[i]<<" ";
    cout<<endl;
    //cout<<vct.size();
}
vector<int> hashF(string str)
{
    vector<int> indxMap(26,0);
    for(int i =0 ; i<str.size(); i++)
    {
        indxMap[str[i] - 'a']++;
    }
    print(indxMap);
    return indxMap;

}

bool compareVector(vector<int>&hashStr1, vector<int> &hashStr2)
{
    ///size is same as declared
    int len1 = hashStr1.size(), len2 = hashStr2.size();
    if(len1 == len2)
    {
        for(int i = 0 ; i< len1; i++)
        {
            if(hashStr1[i] != hashStr2[i])
                return false;
        }
    }
    return true;
}
bool validAnagram(string str1, string str2)
{
    vector<int> hashStr1 = hashF(str1);
    vector<int> hashStr2 = hashF(str2);

    if(compareVector(hashStr1, hashStr2))
        return true;
    return false;

}


int main()
{
    string str1= "abcdef", str2  = "fedcba";

       while(1){
        getline(cin, str1);
        getline(cin, str2);


        if(validAnagram(str1, str2))
            cout<<"Valid Anagram"<<endl;
        else
            cout<<"Anagram is not valid"<<endl;

       }
    return 0;
}
