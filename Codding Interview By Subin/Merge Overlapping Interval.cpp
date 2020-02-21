#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>>&vect)
{
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
            cout << vect[i][j] << " ";
        cout << endl;
    }
}

main()

{

    vector<vector<int> > interval { {1,10},{2,9},{3,8},{4,7},{5,6},{6,6}, {15,20},{2,3},{11,12},{9,16},{22,23} };
    print(interval);
    //int interval[6][2]= { {1,10},{2,9},{3,8},{4,7},{5,6},{6,6} };
    ///is data is already sorted or not
///  sort();
    //vector<int,int> new_interval;

    int l = interval.size();
    cout<<"Size: "<<l<<endl;
    vector<vector<int> > newInterval;
    sort(interval.begin(), interval.end()); ///it sort first element in an incremental way
    cout<<"After Sorting"<<endl;
    print(interval);

   // newInterval.push_back(std::vector<int>{0,0});
    //newInterval.push_back(vector<int>{1,1});
    cout<<"debug"<<endl;
   // print(newInterval);
    int fst =0,lst=0,c=0;
    for(int i =0 ; i< l; i++)
    {
        if(c != 0){
            fst = newInterval[c-1][0], lst = newInterval[c-1][1];
        }
        if(interval[i][0] > lst){
            newInterval.push_back(vector<int>{interval[i][0],interval[i][1]});
            cout<<"int  "<<interval[i][0]<<"  "<<interval[i][1]<<endl;
            c++;

        }
        else
            if(interval[i][1] > lst ){
                lst = interval[i][1];
                //newInterval.pop_back();

                 newInterval.push_back(vector<int>{fst,lst});
                 c++;
            }
       cout<<"F+L   "<<fst<<" "<<lst<<endl;



    }
    cout<<"Final"<<endl;
    print(newInterval);


    return 0 ;


}
