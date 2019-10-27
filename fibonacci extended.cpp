#include<bits/stdc++.h>
using namespace std;
#define lmt 45
/// for this array we can take maximum size of fibonacci is 34th position holder

/// to make it much efficient we need to consider a 2d array which will sequentilly take input with its position value
/// we can run a binary search as generation process is already in a sorted way
long has[10000000];

long pos=0;

int binarySearch(long arr[], long  p, long r, long num) {
   if (p <= r) {
      int mid = (p + r)/2;
      if (arr[mid] == num)
         return mid ;
      if (arr[mid] > num)
         return binarySearch(arr, p, mid-1, num);
      if (arr[mid] < num)
         return binarySearch(arr, mid+1, r, num);
   }
   return -1;
}

main()
{
    long n =0;
    long left = 0,right =1,result = 0;
    has[1] = 1;
    cout<<right<<" ";

    while(n++<lmt)
    {
        result = left+ right;
        left = right;
        right =result;
        has[n] = result;
        cout<<endl<<has[n]<<"\t"<<n+1<<endl;

    }
    cout<<"\ngeneration is done"<<endl;
    while(1)
    {

        cout<<"test a number "<<endl;

        long a;
        cin>>a;
        pos = binarySearch(has,0,lmt,a);
        if(pos != -1)
        {

            cout<<has[pos]<<"\t"<<a<<" is a fibonacci number\t"<<pos<<endl;

        }
        else
            cout<<a<<" is not FIBO"<<endl;


    }
}






