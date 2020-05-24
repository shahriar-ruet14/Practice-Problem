#include<bits/stdc++.h>
using namespace std;

void rvereseArray(int arr[], int start, int end)  ///unused
{
    if (start >= end)
        return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Recursive Function calling
    rvereseArray(arr, start + 1, end - 1);
}
void reverseDirect(string str)
{
    if(!str.size())      return;

    reverseDirect(str.substr(1)); /// this substring  function automatically returns a pointer to point the next
    cout<<str[0];
}
string reverseBySpace(string str)
{
    string rStr;
    for(int i =0; i< str.size(); i++) {}


}

void reverseWord(string str)
{
    int n = str.size();
    int lp = 0;
    for(int i = 0; i<=n ; i++)
    {
        if(str[i] == ' ' || str[i] ==NULL)
        {
          //  cout<<i<<"  "<<i-lp<<endl;
           reverseDirect(str.substr(i-lp,lp));
           cout<<" ";
            lp=0;
        }
        else lp++;
    }
}
main()
{
    string str ="Hello World";
    int i=0;
    reverseDirect(str);/// this operation will reverse the string directly dlroW olleH


   // reverseBySpace(str); ///this operation will reverse the string by word like olleH dlroW
    cout<<"\nReverse Word of: "<<str<<endl;
    reverseWord(str);
}
