#include<bits/stdc++.h>
using namespace std;


int main()
{
    long  n, k;
    vector<int> toy;
    int temp;

    cin>>n>>k;

    for(int i = 0 ; i< n; i++)
    {
        //cout<<"testing";
        cin>>temp;
        toy.push_back(temp);
    }

    sort(toy.begin(), toy.end());

    temp =0;
    int c=0;
    for(int i = 0; i<n; i++)
    {
        if( k >= temp )
        {
            temp =temp + toy[i];
            c++;
        }
        else
        {
            break;
        }
    }
    cout<<--c<<endl;
}
