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
    //cout<<value<<endl;
    for(i=start_idx; i<=end_idx; i++)
    {
        if(arr[i]==value)
        {
            return i;
        }
    }
}



struct node* construct_tree(int inOrder[],int postorder[],int inorder_start,int inorder_end)
{
    static int preorder_idx=inorder_end;

    if(inorder_start > inorder_end)
    {
        return NULL;
    }
    struct node *tree_node=getNewNode(postorder[preorder_idx--]);

    cout<<"kk"<<preorder_idx<<endl;

    cout<<inorder_start<<" "<<inorder_end<<endl;
    if(inorder_start==inorder_end)
    {
        return tree_node;
    }

    int inorder_idx=search(inOrder,  inorder_start,  inorder_end,  tree_node->data);

    //cout<<inorder_idx<<endl;
    tree_node->right=construct_tree(  inOrder,  postorder,  inorder_idx + 1,  inorder_end );

    tree_node->left=construct_tree(  inOrder,  postorder,  inorder_start,  inorder_idx - 1);

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

void preorderTraversal(struct node* root)
{
    if(root!=NULL)
    {
         cout<<root->data<<"\t";
        inorderTraversal(root->left);
        inorderTraversal(root->right);

    }
}

int main()
{
    int inorder[] = { 4, 8, 2, 5, 1, 6, 3, 7 };
    int postorder[] = { 8, 4, 5, 2, 6, 7, 3, 1 };




    int length = sizeof(inorder) / sizeof(inorder[0]);
    struct node *root = construct_tree(inorder, postorder, 0, length - 1);
    cout<<"\n Inorder traversal of the constructed tree is \n";
    postorderTraversal(root);
    cout<<endl;
    return 0;
}
