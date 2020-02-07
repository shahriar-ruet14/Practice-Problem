#include<bits/stdc++.h>
using namespace std;


main()
{
    int n,test = 0, TTL;

    while(scanf("%d",&n)&& n)
        {
            int i,j,size =0,x,y;
            map<int,int> r;

            vector<int> Link[40];

            while(n--)
            {
                cin>>i>>j;
                x= r[i];
                ///cout<<"x "<<x<<endl;
                if(x==0)
                {
                    r[i] =++size;
                    x= size;
                }
                 y= r[j];
                ///cout<<"x "<<x<<endl;
                if(y==0)
                {
                    r[j] =++size;
                    y= size;
                }
                Link[x].push_back(y);
                Link[y].push_back(x);


            }
            while(scanf("%d  %d",&x,&TTL)== 2)
            {
                if(x==0 && TTL == 0) break;

                int used[40]={},dp[40]={},cnt = 0;


                y=x

            }

        }
}
