#include<bits/stdc++.h>
using namespace std;

int arr[]= {1,5,6,7,4,3,2,5};
int s = (sizeof(arr))/(sizeof(arr[1]));


void print()
{
    int i=0;
    while(i<s)
    {
        cout<<" "<<arr[i++];
    }
}


void swapFunction(int leftIndex, int rightIndex) {

   int temp = arr[leftIndex];
   arr[leftIndex] = arr[rightIndex];
   arr[rightIndex] = temp;

}

int partition_function(int left, int right, int pivot)
{

    int   left_pointer = left -1;
    int   right_pointer = right;
    while (true)
    {
        while(arr[++left_pointer] < pivot)
        {
            //nothing but increasing left pointer
        }
        while(arr[--right_pointer]> pivot && right_pointer>0)
        {
            //do nothing but decreasing pivot point
        }
        if(left_pointer>=right_pointer)
            break;
        else
        {
         swapFunction(left_pointer,right_pointer); //swaping between arr[leftPointer] and arr[rightPointer]
        }
    }
         swapFunction(left_pointer,right); //swaping between arr[leftPointer] and arr[rightPointer]
    return left_pointer;
}

void quick_sort(int left , int right)
{
    if((right - left )<=0 )
        return;
    else
    {
        int pivot = arr[right];
        int partitionPoint =   partition_function(left,right,pivot);

        quick_sort(left, partitionPoint-1);
        quick_sort(partitionPoint+1,right);

    }
}


main()
{


    print();
    cout<<endl;

    quick_sort(0,s); //left is started from zero index of array
    print();
    cout<<"\nDone"<<endl;

}
