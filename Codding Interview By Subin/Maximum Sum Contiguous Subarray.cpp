#include<bits/stdc++.h>
using namespace std;
void print(vector<int> arr)
{
    for(int i =0 ; i< arr.size() ; i++)
        cout<<arr[i]<<  " ";
    cout<<endl;
}

int max_sum_normal(vector<int> arr) ///complexity O(n^2)
{
    int max_sum = 0;

    for(int i =0; i< arr.size(); i++)
    {
        if(arr[i] > max_sum)
            max_sum = arr[i];

        //cout<<max_sum<<endl;
        int current_sum =arr[i];
        for(int j =i+1 ; j< arr.size(); j++)
        {
            //   cout<<arr[i]<<endl;
            current_sum += arr[j];
            if(current_sum >= max_sum)
                max_sum = current_sum;

            // cout<<"CUR  "<<current_sum<<endl;
        }
    }
    return max_sum;
}

int max_sum(vector<int>arr)///O(n) time complexity for one loop
{
    int max_sum = -999;
    int cur_sum = 0;

    for(int i =0 ; i< arr.size(); i++)
    {
        cur_sum +=arr[i]; /// to make sum of the SUBArray

        if(max_sum < cur_sum)
            max_sum = cur_sum;
        ///if current sum goes bellow 0 then the next   cur_sum +=arr[i];
        ///this statement will reduce current_sum value to avoid this kind
        /// of consequences we need to handle negative number perfectly
        if(cur_sum < 0)
            cur_sum =0;
    }
    return max_sum;

}



main()
{
    vector<int> arr {-1,100,-2,1,2,3,-5,-4,10}; ///100-2+1+2+3-4+10 = 105 this is the maximum number that any
    ///subarray could generate
    print(arr);

    cout<<"Computation of O(n^2):    "<<max_sum_normal(arr)<<endl;

    cout<<"Computation of O(n):    "<<max_sum(arr);
}
