#include<bits/stdc++.h>
using namespace std;

#define ll long long


struct node
{
    int data;
    struct node *left,*right;
};

struct node* new_node(int data)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node *));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}


struct node* insert(struct node* root,int data)
{
    if(root==NULL)
        return new_node(data);
    else if(data < root->data)
    {
        root->left=insert(root->left,data);
    }
    else if(data >= root->data)
    {
        root->right=insert(root->right,data);
    }
    return root;
};

void preorder(struct node* head)
{
    if(head!=NULL)
    {
        printf("%d\n",head->data);
        preorder(head->left);
        preorder(head->right);
    }
}


int bst(int data,struct node *root)
{
    //printf("12 %d\n",root->data);
    if(root->left==NULL&&root->right==NULL&&root->data!=data)
    {
        return 0;
    }
    if(root->data==data)
        return 1;
    else if(data<root->data)
    {
        bst(data,root->left);
    }
    else if(data>=root->data)bst(data,root->right);

}



int main()
{
    struct node *root=NULL;
    root=insert(root,50);
    insert(root,30);
    insert(root,20);
    insert(root,40);
    insert(root,70);
    insert(root,60);
    insert(root,80);
    preorder(root);
    printf("%d\n",bst(10,root));

    return 0;
}
