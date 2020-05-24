#include<bits/stdc++.h>
using namespace std;

void print(int f, int l, vector<int> &inpt)
{
    if(f<=l)
    {
        cout<<inpt[f]<<" "<<inpt[l]<<endl;
        print(f+1, l-1, inpt);
    }
}



int main()
{
    vector<int> inpt{1, 5, 7 ,8 ,9};
    print(0, inpt.size()-1, inpt);
}
