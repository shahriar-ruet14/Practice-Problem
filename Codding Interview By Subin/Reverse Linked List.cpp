
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};
Node *head;


void printInorder(Node *current)
{

    if(current == NULL) return;
    cout<<current->data<<" ";
    printInorder(current->next);
}

void printReverse(Node *current)
{
    if(current == NULL) return;
    printReverse(current->next);
    cout<<current->data<<" ";
}


void append(int data)
{
    Node *newNode = new Node();
    newNode->data =data;
    newNode->next = NULL;
    if(head == NULL)
    {
        head = newNode;
        cout<<"Creating head"<<endl;
        return;

    }
    else
    {
        Node *tergate = head;
        while(tergate->next != NULL)
        {
            tergate = tergate->next;
            cout<<"Finding Tail"<<endl;
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

printInorder(head);
cout<<endl;
printReverse(head);


}

