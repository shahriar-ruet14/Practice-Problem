#include<bits/stdc++.h>
using namespace std;
void print(vector<int>vct)
{
for(int i =0; i< vct.size();i++)
    cout<<vct[i]<<" ";
cout<<endl;
}

int main()
{
    int  matrix[4][4] =         {
                                {1,2,3,4},
                                {5,6,7,8},
                                {9,10,11,12},
                                {13,14,15,16}
                                };
    vector<int>result;



    //int cl = matrix[0].size();
    //int rw = matrix.size();
    int cl =4,rw =4;
    int direction =0, left = 0,right = cl -1, top =0, bottom = rw-1;


    while(left<=right && top<= bottom){
        if(direction ==0) ///left to right
        {
            for(int i = left; i<= right; i++){
                result.push_back(matrix[top][i]);

        }
        top++;
    }
    if (direction == 1) ///from top to bottom
    {
        for(int i = top; i<=bottom; i++)
        {
            result.push_back(matrix[i][right]);
        }
        right--;
    }



    if(direction ==2) ///right to left
    {
        for (int i =right; i>= left; i--)
        {
            result.push_back(matrix[bottom][i]);
        }
        bottom--;
    }
    if(direction == 3) /// from bottom to top
    {
        for(int i = bottom; i>=top; i--)
        {
            result.push_back(matrix[i][left]);
        }
        left++;
    }



    direction = (direction + 1) % 4; /// The great wheel
    }
print(result);

}
