#include<bits/stdc++.h>
using namespace std;
/*
	Shahriar_143113, RUET
*/
int main()
{
    int t;
    cin>>t;
    int index[10];
    int point,temp;
    for(int  i =1; i<=t ; i++)
    {
        int area =0;
        cin>>point;
        index[1] = index[2] = index[3] = 1;
        index[4] = index[5] = index[6] = 1000;
        while(point--)
        {
            for(int x =1; x<=3; x++)
            {
                cin>>temp;
                if(temp>index[x])
                    index[x] = temp;
            }
            for(int x =4; x<=6; x++)
            {
                cin>>temp;
                if(temp < index[x])
                    index[x] = temp;
            }
        }
        if(index[1] < index[4] && index[2] < index[5] && index[3] < index[6])
            area = (index[4] - index[1])*(index[5] - index[2])*(index[6] - index[3]);
        else
            area =0;

    cout<<"Case "<<i<<": "<<area<<endl;
    }

    return 0;
}


