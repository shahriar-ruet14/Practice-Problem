#include<bits/stdc++.h>
using namespace std;
void print(vector<int> arr)
{
    for(int i =0 ; i< arr.size() ; i++)
        cout<<arr[i]<<  " ";
    cout<<endl;
}
///Bruteforce approach with complexity O(n^2)
int max_dist(vector<int>arr)
{
    int dist=0;
    for(int i =0 ; i< arr.size(); i++)
    {
        for(int j =i+1; j< arr.size(); j++)
        {
            if(arr[i] <=arr[j] && (j-i)> dist)
                dist =j-i;

        }
    }
    return dist;
}

/*Procedure
    Insert data into a map or 2D array mentioning its index
    Sort with coresponding data value
    find max dist among the index  is the result

*/

/*int max_dist2(vector<int> arr)
{
    ///Creating a map
    map<int,greater<int>> data_map;
    for(int i =0 ; i< arr.size(); i++)
        data_map.insert(pair<int,int>(i,arr[i])); ///creating map where first index is index of array second is data value


    for (auto const& entry: data_map)
    {
        std::cout << entry.first << " (" << entry.second << " of Earth's radius)" << '\n';
    }
    return 0;
}
*/
/*
Given an array A of integers, find the maximum of j - i subjected to the constraint of A[i] <= A[j].

If there is no solution possible, return -1.

Example :

A : [3 5 4 2]

Output : 2
for the pair (3, 4)

*/

int max_gap(vector<int> &arr) {

    int l = arr.size();

    vector<pair<int,int> >v2;
    for(int i =0; i< l; i++)
    {
        v2.push_back(make_pair(arr[i],i));
    }

    sort(v2.begin(), v2.end());


    int max_d= v2[l-1].second;
    for(int i = l-2; i>=0; i--)
    {
        max_d = max(max_d,  (v2[i].second - max_d) );
    }
arr.push_back(500);


   return max_d;
}
main()
{
    vector<int> arr {3,5,4,2};
    print(arr);

    cout<<"Bruteforce Max Distance:  "<<max_dist(arr)<<endl;

   cout<<"Computation of O(n):    "<<max_gap(arr)<<endl;
   print(arr);
}

