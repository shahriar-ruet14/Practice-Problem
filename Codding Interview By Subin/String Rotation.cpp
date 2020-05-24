#include<bits/stdc++.h>
using namespace std;


bool isRotation(string &s1, string &s2)
{
    string s = s1+s1;
    cout<<s<<endl;
    int index = s.find(s2);
    cout<<"Found at inde: "<<index<<endl;
    if(s1.size() == s2.size() && index != string::npos )
        return true;
    return false;
}
int main()
{
    string s1 = "ngladeshba";
    string s2 = "bangladesh";
    if(isRotation(s1,s2)) cout<<"Matched in rotated string"<<endl;
    else cout<<"Not Found"<<endl;
}
