#include<bits/stdc++.h>
using namespace std;
vector<int> inpt {1,2,3,4,5,6,7,8,9};
void rec(int n)
{
    cout<<inpt[(n-1)/2]<<" "<<inpt[n/2]<<endl;
    rec(n-1);
}
int main()
{
    rec(inpt.size());
}

