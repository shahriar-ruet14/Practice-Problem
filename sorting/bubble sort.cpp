#include<bits/stdc++.h>
using namespace std;

void swap_(int *a, int *b)
{
    int temp =*a;
    *a = *b;
    *b = temp;
}
void bubble_sort(int arr[], int s)
{
    for(int i =0 ; i<s-1; i++)
    {
        for(int j=0; j<s-i-1; j++) //
        {
            if(arr[j]<arr[j+1])
            {
                //arr[j+1] = arr[j]+arr[j+1];
                //arr[j] = arr[j+1]- arr[j];
                //arr[j+1] = arr[j+1]- arr[j];
                swap_(&arr[j],&arr[j+1]);

            }
        }
    }

}

void insertion_sort(int arr[], int s)
{
    for(int i =1 ; i<s; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] >= temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;  ///on last loop conditon decreses one more time
    }
}
void selection_sort(int arr[], int s)
{
    for(int i =0; i< s; i++)
    {
        for (int j=i+1; j<s; j++)
        {
            if(arr[i]<=arr[j])
            {
                arr[i]= arr[j]+arr[i];
                arr[j] = arr[i]-arr[j];
                arr[i] = arr[i]-arr[j];

            }
        }
    }
}



void print(int arr[], int s)
{
    for(int i =0 ; i< s; i++)
    {
        cout<<arr[i]<<" ";
    }
}


main()
{

    int arr[] = {64, 34, 25, 12, 22, 90, 90,2};
    int s = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of data "<<s<<endl; //8

    bubble_sort(arr,s);
    cout<<"Bubble sorting   ";
    print(arr,s);
    cout<<endl;


    insertion_sort(arr,s);
    cout<<"Selection sorting    ";
    print(arr,s);
    cout<<endl;


    selection_sort(arr,s);
    cout<<"selection sorting    ";
    print(arr,s);
    cout<<endl;




}
