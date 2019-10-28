#include<stdio.h>
#include<iostream>
using namespace std;

#define ll long long


int length(char arr[])
{
    int c=0;
    for(int i=0; arr[i]!='\0'; i++)
    {
        c++;
    }
    return c;
}


char *reverse(char arr[])
{
    char temp[100];
    int i,j;
    int ln=length(arr);
    for(i=ln-1,j=0; i>=0; i--,j++)
    {
        temp[j]=arr[i];
    }
    temp[j]='\0';
    for(i=0; i<ln; i++)
    {
        arr[i]=temp[i];
    }
    return arr;
}


int main()
{
    char arr[100],temp[100],arr1[100],arr2[100],res[1000];
    gets(arr);
    int ln=length(arr);
    char *t=reverse(arr);
    char *t2;

    int k=0,c=0,p=0,j;


    for(int i=0; i<=ln; i++)
    {

        if(arr[i]!=' '&&arr[i]!='\n'&&arr[i]!='\0')
        {
            //cout<<i<<endl;
            temp[k++]=arr[i];
        }
        else
        {
            temp[k]='\0';
            char *t1=reverse(temp);
            //cout<<t1<<endl;
            for(j=c,p=0; p<k; j++,p++)
            {
                res[j]=t1[p];
                c++;
            }

            res[c++]=arr[i];
            res[c]='\0';
            k=0;

        }
    }

    cout<<res<<endl;

    return 0;
}
