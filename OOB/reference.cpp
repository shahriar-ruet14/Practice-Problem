#include<bits/stdc++.h>
using namespace std;

class SortedLargest{
private:
    int i,j,temp, getLagee,a[5];
public:
    ///Constractor
    SortedLargest(void){
        cout<<"Randomly generate 5 number"<<endl;
        for(i =0 ; i<5; i++)
        {
            a[i] = rand()%100;
            cout<<a[i]<<" ";

        }
        GetSortedArray();
        GetLargestValue();

    }
private:
    void GetSortedArray(){
    sort(a,a+4);
    }
    void GetLargestValue()
    {
        int a = std::max_element(a,4);
        cout<<a<<"max"<<endl;
    }

};


main()
{

SortedLargest s1;
    return 0;
}
