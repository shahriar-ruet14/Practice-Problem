#include<bits/stdc++.h>
using namespace std;
 string addBinary(string a, string b)
 {
     string result ="";
     int s =0; ///initialize digit sum

     int la = a.size()-1,lb = b.size()-1; ///to point the last index

     while(la >= 0 || lb >= 0 || s==1)
     {
         s  += la>= 0 ? a[la]-'0':0; ///a[i] -'0' returns either 0 or 1 int
        s +=(lb>=0 ? b[lb]-'0':0);         /// and if string length is not match each other then adjust it with 0


        ///if current sum is 1 or 3 then
        result = char(s%2+ '0') + result;
        ///WOW either 0 or 1 added with '0' as a result returns 0 or 1
        ///string addition operation to store result


        s /=2; ///compute carry
        la--;
        lb--;

     }
     return result;
 }




int main()
{
    string a ="111111111111000000000001", b= "11111111111111100000000000000011";

    cout<<a<<endl<<b<<endl<<addBinary(a,b)<<endl;
}
