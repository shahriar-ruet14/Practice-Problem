#include<bits/stdc++.h>
using namespace std;
void print(vector<int> arr)
{
    for(int i =0 ; i< arr.size() ; i++)
        cout<<arr[i]<<  " ";
    cout<<endl;
}

bool hotel_booking(vector<int> &arrival, vector<int> &departure, int k)
{
    int booking [1000] = {0};
    cout<<booking[100]<<endl;;
    for(int i =0 ; i< arrival.size();i++) ///complexity is n
    {

        for(int j = arrival[i]; j<= departure[i]; j++) ///nested loop with worst case m( number of date total) complexity
            ///so total complexity is O(n*m)
        {
            booking[j]++;
            cout<<j<<"   booked by   "<<booking[j]<<endl;
            if(booking[j]>k)
                return false;

        }
    }
    return true;
}
bool hotel_booking2(vector<int> &arrival, vector<int> &departure, int k)
{
    sort(arrival.begin(), arrival.end());
    sort(departure.begin(), departure.end());
    print(arrival);
    print(departure);

    int cnt=0;
    for(int i =0 ; i< arrival.size(); i++)
    {
       if(arrival[i] < departure[i]){
        cnt++;
       }
        else
            cnt--;
        if(cnt>k)
            return false;


    }



return true;

}
main()
{
    vector<int> arrival {1,3,5};
    vector<int> departure {2,6,8};
    int k =1; //no of room


    if(hotel_booking(arrival,departure,k))
        cout<<"TRUE"<<endl;
    else
        cout<<"FALSE"<<endl;


        cout<<"\n nlogn Complexity"<<endl;
    if(hotel_booking2(arrival,departure,k))
        cout<<"TRUE"<<endl;
    else
        cout<<"FALSE"<<endl;
}
