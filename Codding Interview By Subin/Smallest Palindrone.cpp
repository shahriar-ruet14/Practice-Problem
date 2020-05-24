#include<bits/stdc++.h>
using namespace std;

///count the minimum swap to make a string palindrone


bool isPalindrome(string str)
{
    int l = str.size();
    int rp = l%2 == 0 ? l/2 :  l/2+1;
    int lp = l%2 ==0 ? rp-1 : rp-2 ;
    while(lp>=0 && rp< l )
    {
        //cout<<str[lp]<<str[rp]<<endl;
        if(str[lp--] !=str[rp++])
            return false;
    }
    return true;
}

int smallestPalindrome(string str)
{
    int len= str.size()-1, c =0;
    string tmp = str;
    while(true){
            cout<<tmp<<endl;
    if(isPalindrome(tmp))
        return c;

    tmp = tmp[len+c] + tmp;


    c++;len--;
    }
    cout<<endl<<tmp;
    if(isPalindrome(tmp))
        cout<<"fucker";
    return c;
}



int main()
{
    string str = "121212";
    cout<<isPalindrome(str);
    //cin>>str;
    cout<<endl<<"Minumum Move "<<smallestPalindrome(str)<<endl;

}
