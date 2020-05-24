/*Sum of any  3 number is 0 in an given array*/
#include<bits/stdc++.h>
using namespace std;
void print(vector<int> & data)
{
    for(int i=0; i< data.size(); i++)
        cout<<data[i]<<" ";
    cout<<endl;
}
/*Approach 1
    Naive approach
    3 nested for loop to check every combination at n*n*n time complexity with
    0 space complexity
    Not implemented as very easy
    */
/*Approach 2  Binary Method
    O(N^2longN) time complexity
    for sorted array
        sort the array and implement the last for loop a binary search
    */


void threeSumBinary(vector<int> input,int diff)
{
    sort(input.begin(), input.end());
    print(input);

    int len = input.size();
    int min=0,l =0,r=len-1;
    for(int i =0 ;i< len; i++)
    {
        for(int j =i+1; j< len; j++)
        {
           min = input[i]+input[j];
           //cout<<min<<endl;
           l =j;
           while(l<r) /// here is the complexity logn
           {
               if(min + input[r] == diff)
               {
                   cout<<"\nOutput   :"<<input[i]<<" + "<<input[j]<<" + "<<input[r]<<" = "<<diff<<endl;
               }
               if(min + input[r] > diff)
                    r--;
               else
                break;
           }

        }
    }
}


int main()
{
    vector<int> input {-7,-4,-1,3,4,6,8,9,11,1};
    print(input);
    int diff =13;
    threeSumBinary(input,diff);


}
