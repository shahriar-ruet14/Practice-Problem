///1 +(2+3) + (4+5+6) +....
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n =5;
    int c=1,sum =0;
    for(int i =1; i<= n;i++)
    {cout<<"    ";
        for(int j =0 ; j<i;j++){
        cout<<c<<" + ";
        sum +=c++;
    }

}
cout<<endl<<sum;
}
