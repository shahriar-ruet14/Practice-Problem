#include<bits/stdc++.h>
using namespace std;



#define ll long long

struct node
{
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
    for(i=s; i<=e; i++)
    {
        if(arr[i]==data)
            return i;
    }
}


struct node *construct(int pre[],int post[],int postS,int postE,int size)
{
    static int preInd=0;

    if(postS>postE||preInd>=size)
        return NULL;
    struct node* Node=GetNewNode(pre[preInd++]);


    if(postS==postE)
    {
        return Node;
    }

    cout<< postS <<" "<<postE<<endl;


    int idx=search(post,postS,postE,pre[preInd]);
    if(idx<=postE)
    {
        Node->left=construct(pre,post,postS,idx,size);
        Node->right=construct(pre,post,idx+1,postE,size);
    }

    return Node;
};

void postOrder(struct node *root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        cout<<root->data<<"\t";
        postOrder(root->right);

    }
}

int main()
{

    int pre[]={ 20 ,10, 5, 12, 50, 40, 28, 25, 30, 47, 58};
    int in[]={5,10,12 ,20, 25, 28, 30, 40, 47, 50 ,58};
    int post[] = {5 ,12, 10, 25, 30 ,28 ,47 ,40 ,58,50, 20};
    int sz=sizeof(pre)/sizeof(pre[0]);
    struct node *root=construct(pre,post,0,sz-1,sz);
    postOrder(root);

    return 0;
}

