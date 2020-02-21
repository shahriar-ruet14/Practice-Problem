#include<bits/stdc++.h>
using namespace std;


int main()
{
   vector< vector<int> >mat{
        {1,2,3},
        {4,5,6},
        {7,8,9}};

        ///or input can be taken as user input


    vector<int> result;
    // if(size_of(mat))    {cout<<"Empty matrix"<<endl;    return 0;}

    int cl =mat[0].size();
    int rw =mat.size();

    int direction =0,left =0,right=cl-1,top =0,bottom =rw -1; /// there is 4 direction like this traversal

    int c=0;

   // cout<<cl<<rw<<endl;
while(top<=bottom && left <= right)
    {
        if(direction == 0) ///Left to right
        {
            for(int i =left; i<=right; i++)
            {
                cout<<mat[top][i]<<" ";

            }
            top++;

        }
        else if(direction ==1) ///Top to bottom
        {
            for(int i =top; i<=bottom; i++)
            {
                cout<<mat[i][right]<<" ";

            }
            right--;
        }
        else if(direction == 3) ///Bottom to Top
        {
            for(int i =right; i>=left; i--)
            {
                cout<<mat[bottom][i]<<" ";

            }
            bottom--;
        }
        else if(direction == 4)
        {
            for(int i =bottom; i>=top; i--)
            {
                cout<<mat[i][left]<<" ";
            }
        }

        direction = (direction +1) % 4;

    }

}
