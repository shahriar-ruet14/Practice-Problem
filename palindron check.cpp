#include<bits/stdc++.h>
using namespace std;

main()
{
int n=122321,r =0;
while(n!= 0 )
{
    int reminder = n%10;

     r =r*10 + reminder;
    n/=10;
}
cout<<r<<endl;  /// reverse hoye gelo

}
