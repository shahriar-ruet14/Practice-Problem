#include<bits/stdc++.h>
using namespace std;
int c=0 ;
void print(int arr[], int s)
{
    for(int i =0 ; i< s; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void swap_(int *a, int *b)
{
    int temp =*a;
    *a = *b;
    *b = temp;
    c++;
}
void bubble_sort(int arr[], int s)
{
    c=0;
    for(int i =0 ; i<s-1; i++)
    {
        for(int j=0; j<s-i-1; j++) //
        {
            if(arr[j]>arr[j+1])
            {

                swap_(&arr[j],&arr[j+1]);

            }
        }
    }

}

int main()
{


    int arr[601];
    int s,t;
    cin>>t;
    while(t> 0){
            t--;
    cin>>s;
    for(int i =0 ; i< s; i++)
    {
        cin>>arr[i];
    }

    bubble_sort(arr,s);

    cout<<"Optimal train swapping takes "<<c<<" swaps."<<endl;
    }




}

