#include<bits/stdc++.h>
using namespace std;



int fun1(int x, int y)
{
  if(x == 0)
    return y;
  else{cout<<"x = "<<x<<"\ty = "<<y<<endl;
    return fun1(x - 1,  x + y);
}}
int main(){
cout<<fun1(5,7)<<endl;
}
