
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};
Node *head;

///print reverse order only from nth to mth element

void printInorder(Node *current)
{

    if(current == NULL) return;
    cout<<current->data<<" ";
    printInorder(current->next);
}



/*
    Remove Duplicate function will find the item that are being repeatative
    and remove the duplicate iteam on removeNode function
*/

Void removeDuplicate(Node *head)
{
    if(head == NULL)
    {
        cout<<"No element, No Duplicate"<<endl;
        return;
    }
    Node *current = head;
    Node
    while(current)
    {

    }

}


void append(int data)
{
    Node *newNode = new Node();
    newNode->data =data;
    newNode->next = NULL;
    if(head == NULL)
    {
        head = newNode;
        //cout<<"Creating head"<<endl;
        return;

    }
    else
    {
        Node *tergate = head;
        while(tergate->next != NULL)
        {
            tergate = tergate->next;
           // cout<<"Finding Tail"<<endl;
        }
        tergate->next = newNode;
        return;

    }
}


int main()
{

    append(1);
    append(2);
    append(3);
    append(4);
    append(5);
    append(5);
    append(5);
    append(5);
    append(6);
    append(7);

cout<<"Print In Sequences"<<endl;
    printInorder(head);
    cout<<endl;



}

