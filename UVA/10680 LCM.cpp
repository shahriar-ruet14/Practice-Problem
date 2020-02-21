#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n = 5 ,flag=1;
    int temp,mini,c=0;
    int arr[1000];

    while(scanf("%d",&n) == 1 && n != 0)
    {
        for(int i =2 ; i<=n; i++)
            arr[i] =i;
        temp =1;


        for(int i = 2; i<n/2; i++)
        {
            flag = 1;
            for(int j = i; j<= n; j++)
            {
                if(arr[j]%i == 0)
                {
                    arr[j] = arr[j]/i;
                    flag = i;

                }

            }
            if(flag != 1)
                temp = temp*flag;
        }
        for(int i =2 ; i<=n; i++)
            temp = temp*arr[i];




cout<<"result"<<temp<<endl;
    while(true){
        if(temp%10 != 0)
        {
            cout<<temp%10<<endl;
            break;
        }
        else
            temp = temp/10;
    }
    }
    }


