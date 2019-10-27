#include<bits/stdc++.h>
using namespace std;



int main()
{
    long long int n;
    char s[101];

    cin>>s;
     cin>>n;
    long long int l = strlen(s);
    long long int counter=0;
    for(long long int i =0 ; i< l; i++) if(s[i] == 'a') counter++;

    long long int c2 =0;
    for(long long int j =0 ; j< n%l;j++) if(s[j] == 'a') c2++;
    cout<< n/l*counter+c2<<endl;



    return 0;
}
