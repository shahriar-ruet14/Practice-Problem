
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};


struct Node* newNode(int data)
{
    struct Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}


int search(int arr[], int strt, int end, int value)
{
    int i;
    for (i = strt; i <= end; i++)
    {
        if (arr[i] == value)
            return i;
    }

}

Node* buildUtil(int in[], int post[], int inStrt, int inEnd)
{
    static int preorder_idx=inEnd;
    if (inStrt > inEnd)
        return NULL;


    struct Node* node = newNode(post[preorder_idx--]);

    cout<<"kk"<<preorder_idx<<endl;
    cout<<inStrt<<" "<<inEnd<<endl;
    if (inStrt == inEnd)
        return node;


    int iIndex = search(in, inStrt, inEnd, node->data);

    //cout<<iIndex<<endl;
    node->right = buildUtil(in, post, iIndex + 1, inEnd);
    node->left = buildUtil(in, post, inStrt, iIndex - 1);

    return node;
}







void preOrder(Node* node)
{
    if (node == NULL)
        return;
    printf("%d ", node->data);
    preOrder(node->left);
    preOrder(node->right);
}


int main()
{
    int in[] = { 4, 8, 2, 5, 1, 6, 3, 7 };
    int post[] = { 8, 4, 5, 2, 6, 7, 3, 1 };
    int n = sizeof(in) / sizeof(in[0]);
    int pIndex=n-1;
    Node* root = buildUtil(in, post, 0, n - 1);

    cout << "Preorder of the constructed tree : \n";
    preOrder(root);

    return 0;
}
