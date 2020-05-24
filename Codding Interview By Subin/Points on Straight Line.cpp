#include<bits/stdc++.h>
using namespace std;

int maxPointOnSameLine(vector<pair<int,int> > points2D)
{
    return 5;
}



int main()
{
    int n =6;
    int arr[n][2] = {{-1,1},{0,0},{1,1},{2,2},{3,3},{3,4}};
    vector<pair<int,int> > points2d;
    for(int i =0 ; i<n; i++)
        points2d.push_back(make_pair(arr[i][0],arr[i][1]));
    cout<<maxPointOnSameLine(points2d)<<endl;
    return 0;
}
