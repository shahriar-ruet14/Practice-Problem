#include<bits/stdc++.h>
using namespace std;
void print(vector<char> &inpt)
{
    for(int i =0 ; i<inpt.size(); i++)
        cout<<inpt[i]<<" ";
    cout<<endl;
}

void permutation(vector<char> inpt, int i, int n)
{
    if(i == n)
    {
        print(inpt);
      //  return;
    }
    else

    for(int j =i; j<n; j++)
    {
        swap(inpt[i],inpt[j]);
        permutation(inpt, i+1, n);
        swap(inpt[i],inpt[j]);
    }
}

int main()
{
    vector<char> inpt {'1','2','3'};

    permutation(inpt, 0, inpt.size());
}
