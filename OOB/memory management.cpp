#include<bits/stdc++.h>
using namespace std;
main(){
int *ptr;
cout<<sizeof(*ptr)<<endl;

int data;
ptr = new int;
*ptr = 10;
data =15;
cout<<*ptr<<endl;
cout<<ptr<<endl;
cout<<data<<endl;
cout<<sizeof(*ptr)<<endl;
delete ptr;
cout<<sizeof(*ptr)<<endl;
}
