#include<bits/stdc++.h>
using namespace std;
void print(vector<int> & data)
{
    for(int i=0; i< data.size(); i++)
        cout<<data[i]<<" ";
    cout<<endl;
}

///Naive Approach for two sum
//Space O(1)
//memory O(n^2)
vector<int>twoSumNaive(vector<int> &input)
{
    vector<int>resultInx;
    int len = input.size();
    for(int i=0 ; i<len ; i++)
    {
        for(int j = i ; j<len ; j++)
        {
            if(input[i]+input[j] == 0)
            {
                resultInx.push_back(i);
                resultInx.push_back(j);
            }
        }
    }
    return resultInx;

}

/*Using Binary Search Reduce the Time Complexity to nlogn
*/

vector<int>twoSumBinary(vector<int> input, int diff)
{
    int n = input.size();
    vector<int> resultIndex;
    int l = 0, r = n-1;

    // While there are elements between l and r
    while (r > l)
    {
        //cout<<l<<r<<endl;
        // Check if this pair is closer than the closest pair so far
        if ((input[l] + input[r] ) == diff)
        {
            resultIndex.push_back(l);
            resultIndex.push_back(r);
        }

        // If this pair has more sum, move to smaller values.
        if (input[l] + input[r] > diff)
            r--;
        else // Move to larger values
            l++;



    }
    return resultIndex;
}

int  *hashF(vector<int> input)
{
    int len = input.size();
    int arr[len+1];
    for(int i =0 ; i< len;i++)
    {

            arr[input[i]] = 1;
            cout<<"index    "<<input[i]<<" = "<<arr[input[i]]<<endl;

    }
    return arr;
}


void twoSumTimeSpaceTrade(vector<int> input)
{
    int hasTable[100];
    for(int i = 0; i< input.size(); i++)
    {
        hashTable[input[i]] =1;
    }
}


int main()
{
    vector<int> input {1,2,3,4,5,6,7,8,9,-3,-4};
    print(input);

    // print(input);
    vector<int>resultIndx = twoSumNaive(input);
    cout<<"Indexes "<<endl;
    print(resultIndx);

    ///timeSpaceTrade
    twoSumTimeSpaceTrade(input);


    sort(input.begin(), input.end()); ///sorting with nlong n complexity
    print(input);
    resultIndx = twoSumBinary(input, 0 );
    print(resultIndx);
}
