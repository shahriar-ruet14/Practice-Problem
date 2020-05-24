
#include<bits/stdc++.h>
using namespace std;


int main()
{

    string input = "abccccdef";
    int n = input.size();
    for(int i =0 ; i< input.size(); i++)
    {
        cout<<input[i]<<" ";
    }
    cout<<endl;
    vector<int> freq;
   vector<char> sequence;
   int c=0;
   for(int i =0 ; i< n; i++)
   {
       ++c;
       if(input[i]!= input[i+1] || i == n)
        {
            sequence.push_back(input[i]);
            freq.push_back(c);
            c=0;
        }

   }
    for(int i =0 ; i< sequence.size(); i++)
    {
        cout<<sequence[i]<<" "<<freq[i]<<" ";
    }




    return 0;
}
