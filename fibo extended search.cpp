#include<bits/stdc++.h>
using namespace std;
#define lmt 10 /// for this array we can take maximum size of fibonacci is 34th position holder

/// to make it much efficient we need to consider a 2d array which will sequentilly take input with its position value
/// we can run a binary search as generation process is already in a sorted way
long has[10000000];
 main()
{
    long n =0;
    long left = 0,right =1,result = 0;
    has[1] = true;
    cout<<right<<" ";

    while(n++<lmt)
    {
        result = left+ right;
        left = right;
        right =result;
        has[result] = true;
        cout<<result<<" ";
        cout<<endl<<n<<endl;

    }
    cout<<"\ngeneration is done"<<endl;
    while(1)
    {
        cout<<"test a number "<<endl;
        long a;
        cin>>a;
        if(has[a]==true)

            cout<<a<<" is a fibonacci number"<<endl;
            else

            cout<<a<<" is not FIBO"<<endl;


    }
}






