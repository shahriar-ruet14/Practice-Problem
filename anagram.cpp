#include<bits/stdc++.h>
using namespace std;
#define Max 256
bool Compare( char *arr1, char *arr2)
{
    for(int i =0 ; i<Max; i++)
    {
        if(arr1[i] != arr2[i])
            return false;
    }
    return true;

}



void Search(char *pat, char *txt)
{
    int M = strlen(pat), N =  strlen(txt);



    char CountP[Max] = {0}, CountTw[Max] = {0};

    for(int i =0 ; i< M; i++)
    {
        CountP[pat[i]]++;
        CountTw[txt[i]]++;

    }
    for(int i =M; i<N ; i++)
    {
        if(Compare(CountP,CountTw))
        {
            cout<<"Found at index :"<<i-M<<endl;
        }
        CountTw[txt[i]]++;
        CountTw[txt[i-M]]--;

    }
            if(Compare(CountP,CountTw))
        {
            cout<<"Found at index :"<<N-M<<endl;
        }

}




int main()
{
    char txt[] = "BACDGABCDA";
    char pat[] = "ABCD";
    Search(pat,txt);


    return 0;

}
