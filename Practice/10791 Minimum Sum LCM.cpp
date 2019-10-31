#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    int temp,mini,c=0;

    while(scanf("%d",&n) == 1 && n != 0) {
            temp = 0; mini =2147483647;


    for(int i =1; i< n/2 ; i++)
    {


            if(n%i == 0)
            {
                temp = n/i + i;
                if(mini > temp)
                {
                    mini = temp;

                }

            }
    }
    cout<<"Case "<<++c<<": "<<mini<<endl;
}
}
