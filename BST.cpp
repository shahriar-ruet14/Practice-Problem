/*
    Binary Search Tree - BST implementation
    Using C language.
    Insert value, search value and traverse the whole Tree
    Programmed by Hasan Abdullah
    Contact: http://hellohasan.com
*/

#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

typedef struct tree
{
    int number;
    struct tree *leftChild;
    struct tree *rightChild;

} node;
node *root=NULL;

void insertNode(int value);
void searchOnTree(int value);
void preOrderPrint(node *rootNode);
void inOrderPrint(node *rootNode);
void postOrderPrint(node *rootNode);





node * findMaxRecursive(node *root)
{
    if(root->rightChild==NULL)
        return root;

    return findMaxRecursive(root->rightChild);
}

int isItBst(node *root) //Not efficient way
{
    if(root==NULL) return 1;

    if(root->leftChild!=NULL && findMax(root->leftChild) > root->number)
        return 0;
    if(root->rightChild!=NULL && findMin(root->rightChild) < root->number)
        return 0;
    if(!isItBst(root->leftChild) || !isItBst(root->rightChild))
        return 0;

    return 1;
}




int main()
{

    insertNode(45);
    insertNode(54);
    insertNode(40);
    insertNode(49);
    insertNode(38);
    insertNode(70);
    insertNode(30);
    insertNode(39);
    insertNode(41);
    insertNode(45);
    insertNode(44);

    printf("\nPre-Order Tree printing:\n");
    preOrderPrint(root);
    puts("");

    printf("\nIn-Order Tree printing:\n");
    inOrderPrint(root);
    puts("");

    printf("\nPost-Order Tree printing:\n");
    postOrderPrint(root);
    puts("");

    searchOnTree(70);




    cout<<"Binary result"<<isItBst(root);

    return 0;
}

void insertNode(int value)
{
    node *tempNode;
    node *currentNode;
    node *parentNode;

    tempNode = (node *) malloc(sizeof(node));
    tempNode->number = value;
    tempNode->leftChild = NULL;
    tempNode->rightChild = NULL;

    //For the very first call
    if(root==NULL)
    {
        root = tempNode;
    }
    else
    {
        currentNode = root;
        parentNode = NULL;

        while(1)
        {
            parentNode = currentNode;

            if(value <= parentNode->number)
            {
                currentNode = currentNode->leftChild;

                if(currentNode==NULL)
                {
                    parentNode->leftChild = tempNode;
                    return;
                }
            }
            else
            {
                currentNode = currentNode->rightChild;

                if(currentNode==NULL)
                {
                    parentNode->rightChild = tempNode;
                    return;
                }
            }

        }
    }
}

void searchOnTree(int value)
{
    node *currentNode = root;
    int flag = 0;

    while(1)
    {
        if(value == currentNode->number)
        {
            flag = 1;
            break;
        }
        else if(value<=currentNode->number)
            currentNode = currentNode->leftChild;
        else
            currentNode = currentNode->rightChild;

        if(currentNode==NULL)
            break;

    }

    if(flag==1)
        printf("\n%d is found on Tree.\n\n", currentNode->number);
    else
        printf("\n%d is not found on Tree.\n\n", value);
}

void preOrderPrint(node *rootNode)
{
    if(rootNode==NULL)
        return;

    printf("%d ", rootNode->number);

    preOrderPrint(rootNode->leftChild);
    preOrderPrint(rootNode->rightChild);
}

void inOrderPrint(node *rootNode)
{
    if(rootNode==NULL)
        return;

    inOrderPrint(rootNode->leftChild);

    printf("%d ", rootNode->number);

    inOrderPrint(rootNode->rightChild);
}

void postOrderPrint(node *rootNode)
{
    if(rootNode==NULL)
        return;

    postOrderPrint(rootNode->leftChild);
    postOrderPrint(rootNode->rightChild);

    printf("%d ", rootNode->number);

}
