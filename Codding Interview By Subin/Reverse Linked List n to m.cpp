
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};
Node *head;

///print reverse order only from nth to mth element
void printReverseNM(int n, int m)
{
    Node * curr = head;
    int i;
    for( i =0 ; i< n; i++)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }

    stack<int>n_m;
    for( i =n ; i< m; i++) ///push in stack for print it in reverse order
    {

        n_m.push(curr->data);
        curr = curr->next;
    }
    while(n_m.size())
    {
        cout<<n_m.top()<<" "; ///printing in reverse order
        n_m.pop();
    }
    while(curr)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    return ;
}
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
    append(5);
    append(6);
    append(7);

    printInorder(head);
    cout<<endl;
    printReverse(head);
    cout<<"\nENDING\n";
    printReverseNM(2,5);


}

