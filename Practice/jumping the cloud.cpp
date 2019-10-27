
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int c[101];
    int n;
    cin>>n;
    for(int i=0 ; i< n; i++) cin>>c[i];
    int j =0;
    int counter =0;
    while(j<(n-1))
    {
       if(c[j] == 0)
       {
           if(c[j+2] == 0)
            j=j+2;
           else
            j++;
       }

       counter++;
    }
    cout<<counter<<endl;


    return 0;



}
