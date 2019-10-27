#include<bits/stdc++.h>
using namespace std;

struct node
{
    bool end_mark;
    node *next[26];// for alphabet to create a dictionary

    node()
    {
        end_mark = false;

        for(int i =0 ; i< 26; i++)
            next[i] = NULL;
    }

};

node *root;



void insert(char *str, int len)
{
    node* current = root;
    for (int i =0; i< len; i++)
    {
        int id = str[i]- 'a';
        if(current->next[id]==NULL)
        {
            current->next[id] = new node();
        }
        current = current->next[id];
    }
    current->end_mark = true;

}
bool search(char *str, int len)
{
    node *current  = root;
    for(int i=0 ;i< len; i++)
    {
        int id = str[i] - 'a';
        if(current->next == NULL)
        {
            return false;

        }
        current = current->next[id];
    }
    return current->end_mark;
}
void del(node* cur)
{
    for (int i = 0; i < 26; i++)
        if (cur->next[i])
            del(cur->next[i]);

    delete (cur);
}
int main()
{
    root = new node();
    cout<<"Enter a number of words"<<endl;

    int num_word;
    cin>>num_word;

    for(int i = 0; i<=num_word; i++)
    {
        char str[50];
        scanf("%s",str);
        insert(str,strlen(str));

    }
    puts("Enter number of query");
    int query;
    cin>>query;
    for(int i=0; i<= query; i++)
    {
        char str[50];
        scanf("%s",str);

        if(search(str,strlen(str)))
            puts("Got it\n");
            else
                puts("Not Found\n");
    }

    del(root); ///ট্রাইটা ধ্বংস করে দিলাম
}
