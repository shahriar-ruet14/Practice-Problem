#include<bits/stdc++.h>
using namespace std;



#define ll long long

struct node{
    int data;
    struct node *left;
    struct node *right;
};


struct node* GetNewNode(int data)
{
    struct node* temp=(struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
};


int search(int arr[],int s,int e,int data)
{
    int i;
    for(i=s;i<=e;i++)
    {
        if(arr[i]==data)
            return i;
    }
}


struct node *construct(int pre[],int post[],int postS,int postE,int size)
{
    static int preInd=postS;

    if(postS>postE||preInd>=size)
        return NULL;
    struct node* Node=GetNewNode(pre[preInd++]);


    if(postS==postE)
    {
        return Node;
    }
    int idx=search(post,postS,postE,pre[preInd]);


    Node->left=construct(pre,post,postS,idx,size);
    Node->right=construct(pre,post,idx+1,postE,size);
    return Node;
};

void postOrder(struct node *root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<"\t";
    }
}

int main()
{

    int pre[]={1, 2, 4, 5, 3, 6};
    int in[]={4, 2, 5, 1, 6, 3};
    int post[] = {4, 2, 5, 6, 3, 1};
    int sz=sizeof(pre)/sizeof(pre[0]);
    struct node *root=construct(post,in,0,sz-1,sz);
    postOrder(root);

    return 0;
}

