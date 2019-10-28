#include<bits/stdc++.h>
using namespace std;


#define ll long long


struct node{
    int data;
    struct node *left;
    struct node *right;
};


struct node *newNode(int data)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}


struct node* insert(int data, struct node* node)
{
    if(node==NULL)
        return newNode(data);
    if(data < node->data)
    {
        node->left=insert(data,node->left);
    }
    else if(data > node->data)
    {
        node->right=insert(data,node->right);
    }
    return node;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->data);
        inorder(root->right);
    }
}

int main()
{
    struct node *root=NULL;
    root=insert(50,root);
    insert(30,root);
    insert(70,root);
    insert(20,root);
    insert(40,root);
    insert(60,root);
    insert(80,root);
    inorder(root);
    return 0;
}
