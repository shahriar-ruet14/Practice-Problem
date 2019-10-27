#include<bits/stdc++.h>
using namespace std;


int main(){

 int n, m,i,j,temp;
int a[2000005], b[2000005],k[2000005];
cin>>n>>m;
for( i = 0; i< m ;i++)   cin>>a[i]>>b[i]>>k[i];

 int vct[1000000];

temp=0;
for( i =0 ; i< m ; i++){
for( j=0 ; j< n ; j++)
{
     if(vct[j] == NULL) vct[j] =0;
    if(j >= (a[i]-1)&& j <= (b[i]-1))
        {

            vct[j] = vct[j]+k[i];
        }
        if(vct[j]>temp)
        temp = vct[j];

}
}
cout<<temp<<endl;
//for(int i = 0; i< n ;i++)   cout<<vct[i]<<" ";


return 0;

}
