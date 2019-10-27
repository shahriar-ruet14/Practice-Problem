#include<bits/stdc++.h>
using namespace std;


main()

{

    int a[3][3]= {{1,2,3},
        {2,4,5},
        {6,7,8}
    };

    int b[3][3]= {{1,2,3},
        {2,4,5},
        {6,7,8}
    };
    int result[3][3];
    for(int i =0 ; i<3 ; i++)
    {
        for (int j =0 ; j< 3; j++)
        {
            result[i][j] = 0;
            for(int k=0; k<3; k++)
            {
                result[i][j] =+ a[i][k]*b[k][j];


            }
            cout<<result[i][j]<<"\t";
        }
        cout<<endl;
    }

}
