#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

	long long int c;
	cin>>c;
	while(c-->0)
	{cout<<"C "<<c<<endl;
	    bool flag =false;
	    long long int pos1 = 0;
	   long long int pos2 = 0;
	 long long int n,s;
	 long long int arr[1000];
	 cin>>n>>s;
	 //cout<<s<<endl;
	 for(long long int i =0 ; i< n; i++)	     cin>>arr[i];
	 for(long long int i =0; i<n; i++){
	     long long int temp =0;
	     for(long long int j =i; j<n;j++)
	     {
	       temp =temp+ arr[j];
	       //cout<<"sumation" <<temp<<endl;

	         if(s == temp)
	         {
	              pos1 = i;
	             pos2 = j;

	             flag =true;
	             break;
	         }
	     }
	     if(flag == true) break;
	 }
	 if(flag==true)
	 cout<<pos1+1<<" "<<pos2+1<<endl;
	 else
	 cout<<"-1"<<endl;

	}
	return 0;
}
