#include<bits/stdc++.h>
using namespace std;
string powerOf2(string input)
 {
     string result =input;

     int len = input.size();
     int c=0;;
     while(result.size())
     { int n;
     int carry =0;
         string temp ="";
         for(int i =0; i < result.size(); i++)
         {
              n = carry*10 + result[i] - '0';
               // cout<<n<<endl;

             temp =temp+char( n/2 + '0');
             carry = n%2;

         }
                     if(result.size() == 1 && result[0] == '1')
            return "  Power of 2" ;
         if(carry != 0)
            return "  is not Power of 2";
            if(temp[0] == '0')
                temp.replace(0,1,"");


         result =temp;
         cout<< "result : " <<result<<endl;
         c++;
     }


     return result;
 }
int main()
{
    while(1){
    string input ="256";
    cin>>input;
    cout<<input<<powerOf2(input)<<endl;
}}
