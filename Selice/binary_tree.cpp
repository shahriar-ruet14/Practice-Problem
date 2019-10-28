#include<iostream>
using namespace std;

// node structure
typedef struct node
{
    int value;
    struct node *left, *right;
} node;

// Find the index of value in arr[start ... end]
int search(int arr[], int start_idx, int end_idx, int value)
{
    int i;
    for(i = start_idx; i <= end_idx; i++)
    {
        if(arr[i] == value)
            return i;
    }
}

// create a new node
node *getNewNode(int value)
{
    node *new_node = new node;
    new_node->value = value;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

// Inorder traversal of a tree
void inorderTraversal(node *ptr)
{
    if(ptr == NULL)
        return;
    else
    {
        inorderTraversal(ptr->left);
        cout<<ptr->value<<"\t";
        inorderTraversal(ptr->right);
    }
}

// construct the tree from its inorder and preorder traversals
node* constructTree(int inorder[],int preorder[],int inorder_start,int inorder_end)
{
    static int preorder_idx = 0;
    if(inorder_start > inorder_end) //bound check
        return NULL;

    // create a new node using the value in the current index of the preorder array
    node *tree_node = getNewNode(preorder[preorder_idx++]);

    // leaf node (no children)
    if(inorder_start == inorder_end)
        return tree_node;

    // Find the index of this node in the inorder array
    int inorder_idx = search(inorder,inorder_start,inorder_end,tree_node->value);

    // construct the left and right subtrees of this node
    tree_node->left = constructTree(inorder,preorder,inorder_start,inorder_idx-1);
    tree_node->right = constructTree(inorder,preorder,inorder_idx+1,inorder_end);

    return tree_node;
}

// main
int main()
{
    int inorder[] = {4, 2, 5, 1, 6, 3};
    int preorder[] = {1, 2, 4, 5, 3, 6};
    int length = 6;
    node *root = constructTree(inorder, preorder, 0, length - 1);
    cout<<"\n Inorder traversal of the constructed tree is \n";
    inorderTraversal(root);
    cout<<endl;
    return 0;
}
