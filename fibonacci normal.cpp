#include<bits/stdc++.h>
using namespace std;


main()
{
   long n;


   while(1){
    cout<<"Enter"<<endl;
    cin>>n;
    int l =0 ,r=1;
    int result =0;
    while(n>0)
    {
        result = l+r;

        int temp = l;
        l =result;
        r= temp;
        n--;
        cout<<result<<" ";
    }
    cout<<result<<endl;

   }
}
