#include<bits/stdc++.h>
using namespace std;



void print_preorder();
struct node{
int roll;
node *left, *right;
 node()
 {
     left = NULL;
     right = NULL;
 }
};
node *root;





void print_preorder(node *current)
{
    if (current ==NULL) return;


   cout<<current->roll<<endl;
   print_preorder(current->left);
   print_preorder(current->right);


}


void insert(int roll)
{
    if(root == NULL)
    {
        root = new node();
        root->roll = roll;
    ///left right previous initialize with null on creat

    }
    else{
        node *current = root;
        node *parent;
        while(current != NULL)
        {
            if(roll < current->roll)
            {
                parent = current;
                current = current->left;

            }
            else{
                parent = current;
                current= current->right;
            }
        }

        node *new_node = new node();
        new_node->roll = roll;
        if(roll<parent->roll)
            parent->left = new_node;
        else
            parent->right = new_node;






    }
}


main()
{
    insert(1);
    insert(5);
    insert(2);
    insert(7);
    insert(3);
    insert(6);
    insert(4);
    insert(5);
    print_preorder(root);
}
