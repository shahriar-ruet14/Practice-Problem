#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t,n, arr[100009];
    cin>>t;
    int flag,temp;
    while(t-->0)
    {
        flag =0;
        int c =0;
        cin>>n;
        for(int i =0 ; i < n; i++) cin>>arr[i];

       for(int i =n-1; i>=0; i-- )
       {
           if(arr[i] !=i+1 )
           {
               if(i-1>=0 && arr[i-1] == i+1 )
               {
                   c++;
                   arr[i-1] = arr[i];
                   arr[i] = i+1;

               }
               else if(i-2>= 0 && arr[i-2]== i+1)
               {
                   c = c+2;
                   arr[i-2] = arr[i-1];
                   arr[i-1] = arr[i];
                   arr[i] = i+1;
               }
               else
               {
                   flag = 1;
               }
           }
       }
       if(flag == 1)
       {
           cout<<"Too chaotic"<<endl;
       }
       else
        cout<<c<<endl;

    }
    return 0;

}
