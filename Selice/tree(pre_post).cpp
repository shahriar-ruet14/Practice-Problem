/* program for construction of full binary tree */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
and a pointer to right child */
struct node
{
	int data;
	node *left;
	node *right;
};

// A utility function to create a node
node* newNode (int data)
{
	node* temp = new node();

	temp->data = data;
	temp->left = temp->right = NULL;

	return temp;
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

// A recursive function to construct Full from pre[] and post[].
// preIndex is used to keep track of index in pre[].
// l is low index and h is high index for the current subarray in post[]
struct node* constructTreeUtil (int pre[], int post[], int* preIndex,int postS, int postE, int size)
{
	// Base case
	if (*preIndex >= size || postS > postE)
		return NULL;


	// The first node in preorder traversal is root. So take the node at
	// preIndex from preorder and make it root, and increment preIndex
	node* root = newNode ( pre[*preIndex] );
	++*preIndex;

	// If the current subarry has only one element, no need to recur
	if (postS == postE)
		return root;

    cout<<postE<<" "<<postS<<endl;

	// Search the next element of pre[] in post[]
	int iIndex=search(post,postS,postE,pre[*preIndex]);


	// Use the index of element found in postorder to divide
		// postorder array in two parts. Left subtree and right subtree
	if (iIndex <= postE)
	{
		root->left = constructTreeUtil (pre, post, preIndex,postS, iIndex, size);
		root->right = constructTreeUtil (pre, post, preIndex, iIndex + 1, postE, size);
	}

	return root;
}

// The main function to construct Full Binary Tree from given preorder and
// postorder traversals. This function mainly uses constructTreeUtil()
node *constructTree (int pre[], int post[], int size)
{
	int preIndex = 0;
	return constructTreeUtil (pre, post, &preIndex, 0, size - 1, size);
}

// A utility function to print inorder traversal of a Binary Tree
void printInorder (node* node)
{
	if (node == NULL)
		return;
	printInorder(node->left);

	printInorder(node->right);
	cout<<node->data<<" ";
}

// Driver program to test above functions
int main ()
{
	int pre[]={ 20 ,10, 5, 12, 50, 40, 28, 25, 30, 47, 58};
    int in[]={5,10,12 ,20, 25, 28, 30, 40, 47, 50 ,58};
    int post[] = {5 ,12, 10, 25, 30 ,28 ,47 ,40 ,58,50, 20};
	int size = sizeof( pre ) / sizeof( pre[0] );

	node *root = constructTree(pre, post, size);

	cout<<"Inorder traversal of the constructed tree: \n";
	printInorder(root);

	return 0;
}

//This code is contributed by rathbhupendra

