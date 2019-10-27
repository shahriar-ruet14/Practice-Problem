#include<bits/stdc++.h>
using namespace std;

struct node
{
    bool end_mark;
    node *next[10];
    node()
    {
        end_mark = false;
        for(int i =0; i< 10; i++)
            next[i] = NULL;

    }

};
node *root;


void insert(char *str, int len)
{
    node *current  = root;
    for(int i =0 ; i< len; i++)
    {
        int id = str[i]-'0';
        if(current->next[id]==NULL)
            current->next[id] = new node();
        current = current->next[id];

    }
    current->end_mark = true;

}

bool check(char *str, int len)
{
    node *current = root;
    for(int i=0 ; i<len; i++)
    {
        int id = str[i]-'0';
        if(current->next == NULL)
            return false;
        current =current->next[id];


    }

    return current->end_mark;
}


main()
{
    int t,n;
    char str[100];
    string s1[100];
    string st;
    root = new node();
    cin>>t;
    while(t>0)
    {
        cin>>n;
        for(int i =0; i < n ; i++ )
        {
            scanf("%s",str);
            insert(str, strlen(str));
            s1[i]=str;
        }
        bool flag = false;
        for(int i =0; i<n; i++)
        {

           // str= s1[i];
           st = s1[i];
            if(check(st,strlen(st)))
                puts("Got it\n");
            else
                puts("Not Found\n");
        }

        t--;
    }


}
