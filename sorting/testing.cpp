

#include<bits/stdc++.h>
using namespace std;

int arr[]= {1,5,6,7,4,3,2,5};
int s = (sizeof(arr))/(sizeof(arr[1]));


void print()
{ int i=0;
    while(i<s){
        cout<<" "<<arr[i++];
    }
}
void swapFunction(int leftIndex, int rightIndex) {

   int temp = arr[leftIndex];
   arr[leftIndex] = arr[rightIndex];
   arr[rightIndex] = temp;

}


int partitionFunction(int left, int right, int pivot) {

   int leftPointer = left -1;
   int rightPointer = right;

   while(true) {

      while(arr[++leftPointer] < pivot) {
         //do nothing
      }

      while(rightPointer > 0 && arr[--rightPointer] > pivot) {
         //do nothing
      }

      if(leftPointer >= rightPointer)
         break;
      else
         swapFunction(leftPointer,rightPointer); //swaping between arr[leftPointer] and arr[rightPointer]

   }

   swapFunction(leftPointer,right);

   return leftPointer;
}



void quickSort(int left, int right) {

   if(right-left <= 0)
      return;
   else {
      int pivot = arr[right];
      int partitionPoint = partitionFunction(left, right, pivot);

      quickSort(left,partitionPoint-1);
      quickSort(partitionPoint+1,right);
   }
}
int main()
{
    print();

    print();cout<<endl;
    quickSort(0,s);
    print();

}

