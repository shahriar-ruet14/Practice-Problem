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


struct node *construct(int pre[],int in[],int inS,int inE,int size)
{
    static int preInd=inE;

    if(inS>inE)
        return NULL;
    struct node* Node=GetNewNode(pre[preInd--]);


    if(inS==inE)
    {
        return Node;
    }
    int idx=search(in,inS,inE,Node->data);

    Node->right=construct(pre,in,idx+1,inE,size);
    Node->left=construct(pre,in,inS,idx-1,size);

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
    struct node *root=construct(pre,in,0,sz-1,sz);
    postOrder(root);

    return 0;
}

