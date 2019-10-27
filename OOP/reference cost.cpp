

#include<bits/stdc++.h>
using namespace std;

void swap_by_reference(int& a, int& b)
{
    int temp = a;
    cout<<temp<<endl;
    a = b;
    b= temp;
}
int main(){

int a = 5, b =10;
swap_by_reference(a,b);
cout<<a<<" "<<b;


    return 0;
}
