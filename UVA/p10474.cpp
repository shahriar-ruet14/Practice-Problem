#include<bits/stdc++.h>
using namespace std;


main()
{
    bool flag;
    int pos;
    int c =1;
    int N,Q,marbel[51],query[51];



    while(1);
    {
        cin>>N>>Q;
        if(N==0 && Q==0)
        break;
        cout<<"doing";
        flag= false;
        pos =-1;

        cout<<"CASE# "<<c++<<": "<<endl;
        for(int i =0 ; i<N; i++) cin>>marbel[i];
        sort(marbel,marbel+N);

        for(int i =0 ; i<Q; i++) cin>>query[i];
        for(int i =0 ; i<Q; i++)
        {
            for(int j =0 ; i< N; j++)
            {
                if(query[i] == marbel[j])
                    pos = j+1;

                break;
            }
            if(pos != -1)cout<<query[i]<<" found at "<<pos<<endl;
            else
                cout<<query[i]<<" Not found"<<endl;

        }

    }
}
