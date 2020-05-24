#include<bits/stdc++.h>
using  namespace std;



int countTriangle(vector<int> &input)
{
    int t = 0,c =0,len = input.size();

    for(int f =0; f < len -2; f++)
    {

        for(int s = f+1; s<len-1; s++)
        {
            t = s+1;

            if(input[f]+ input[s] <= input[t])
                break;
            else
            {
                while(input[f]+ input[s] > input[t] && t<len)
                {
                    cout<<input[f]<<" "<<input[s]<<" "<<input[t]<<endl;
                    c++;
                    t++;
                }
            }
        }
    }
    return c;
}


int main()
{
    vector<int> input {1,3,3,3,4};
    cout<<countTriangle(input);
}
