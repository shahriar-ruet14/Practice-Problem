#include<bits/stdc++.h>
using namespace std;
void print(vector<int> arr)
{
    for(int i =0 ; i< arr.size() ; i++)
        cout<<arr[i]<<  " ";
    cout<<endl;
}

void max_unsort(vector<int> &inp_data)
{
    vector<int> inp_copy;
     inp_copy = inp_data;

    sort(inp_copy.begin(), inp_copy.end());
    int mrk_f=-1, mrk_l;
    print(inp_copy);

    for(int i =0 ; i< inp_copy.size(); i++)
    {
        if(inp_copy[i] != inp_data[i])
        {
            if(mrk_f == -1)
                mrk_f = i;
            else
                mrk_l =i;
        }

    }

        cout<<mrk_f<<"  "<<mrk_l<<endl;

}

void max_unsort2(vector<int> &inp_data)
{
    int start_p = 0;
    int end_p = 0;
    while(i)
}



main()
{
    vector<int> inp_data {5,6,1,2,4,7};
    print(inp_data);
    max_unsort(inp_data);/// nlogn time complexity
    max_unsort2(inp_data); ///n time complexity

}

