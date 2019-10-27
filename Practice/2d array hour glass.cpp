#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int arr[7][7];
    for(long long int i=0 ; i< 6; i++)
        for (long long int j =0 ; j<6 ; j++)
            cin>>arr[i][j];
   long long int sum [5][5];
   long long int max = -9223372036854775808;
     for(long long int i=0 ; i< 4; i++){
        for (long long int j =0 ; j<4 ; j++)
     {
         sum[i][j] = arr[i][j]+arr[i][j+1]+arr[i][j+2]
                            +arr[i+1][j+1]
                + arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2] ;

                if(sum[i][j]>= max)
                    max = sum[i][j];
                //cout<<sum[i][j]<<" ";
     }
     //cout<<endl;
     }
     cout<<max<<endl;




    return 0;
}
