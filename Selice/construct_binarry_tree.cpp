#include<bits/stdc++.h>
using namespace std;

#define ll long long


struct node
{
    int data;
    struct node *left,*right;
};

struct node* getNewNode(int value)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
};

int search(int arr[],int start_idx,int end_idx,int value)
{
    int i;
    for(i=start_idx; i<=end_idx; i++)
    {
        if(arr[i]==value)
        {
            return i;
        }
    }
}



struct node* construct_tree(int inOrder[],int preOrder[],int inorder_start,int inorder_end)
{
    static int preorder_idx=0;
    if(inorder_start>inorder_end)
    {
        return NULL;
    }
    struct node *tree_node=getNewNode(preOrder[preorder_idx++]);
    if(inorder_start==inorder_end)
    {
        return tree_node;
    }

    int inorder_idx=search(inOrder,inorder_start,inorder_end,tree_node->data);
    tree_node->left=construct_tree(inOrder,preOrder,inorder_start,inorder_idx-1);
    tree_node->right=construct_tree(inOrder,preOrder,inorder_idx+1,inorder_end);
    return tree_node;

};

void inorderTraversal(struct node* root)
{
    if(root!=NULL)
    {
        inorderTraversal(root->left);
        cout<<root->data<<"\t";
        inorderTraversal(root->right);
    }
}

void postorderTraversal(struct node* root)
{
    if(root!=NULL)
    {
        inorderTraversal(root->left);
        inorderTraversal(root->right);
        cout<<root->data<<"\t";
    }
}

int main()
{
    int inorder[] = {4, 2, 5, 1, 6, 3};
    int preorder[] = {1, 2, 4, 5, 3, 6};
    int postorder[] = {4, 2, 5, 6, 3, 1};
    int length = 6;
    struct node *root = construct_tree(inorder, preorder, 0, length - 1);
    cout<<"\n Inorder traversal of the constructed tree is \n";
    postorderTraversal(root);
    cout<<endl;
    return 0;
}
