
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int roll;
    node* next;


};
node* root=NULL;


void print()
{
    node *tergate_node = root;
    while(tergate_node != NULL)
    {
        printf("%d ",tergate_node->roll);
        tergate_node = tergate_node->next;
    }
}


void append(int roll)
{
    if(root == NULL) ///check only in intialize step
    {
        root = new node(); /// this is for creating new node
        root->roll = roll;
        root->next = NULL;

    }
    else  /// This will execute all time except very begining
    {

        node *tergate_node = root;
        while(tergate_node-> next != NULL) ///insertion search O(n) complexity
        {
            tergate_node = tergate_node->next;
        }

        node *new_node = new node();

        new_node->roll = roll;
        new_node -> next = NULL; ///making this the last node
        //printf("%i",new_node->roll);
        tergate_node->next = new_node; ///link with the main link list

    }
}
void delete_node(int roll)
{
    node *tergate_node = root;
    node *previous_node=NULL;
    while(tergate_node->roll != roll )
    {
        previous_node = tergate_node; ///to update previous node next address it need to preserve
        tergate_node = tergate_node->next;
    }


    if(tergate_node==root)
    {
        /* root=root->next;
        লক্ষ্য করো, আমি delete(node) নামের একটা লাইব্রেরি ফাংশন ব্যবহার করেছি। মোছার সময় পয়েন্টার ঠিকঠাক করার পর অবশ্যই delete ফাংশন ব্যবহার করে মেমরি ফ্রি করে দিতে হবে, নাহলে লিংকড লিস্ট থেকে নোড মুছে গেলেও নোডটা মেমরিতে থেকে যাবে, অন্য কোনো প্রোগ্রাম সেটাকে ব্যবহার করতে পারবে না। লিংকড লিস্টের কোড লেখার সময় delete() ফাংশন ব্যবহার করতে ভুলে যাওয়া খুবই কমন একটা ভুল।
        */


        node *temp = root;
        root = root->next;
        delete(temp);
    }
    else
    {
        previous_node->next = tergate_node->next;
        delete(tergate_node); ///To space free optional
    }


}
void update_after_node(int update_after, int roll)
{
    node *tergate_node = root;
    node *previous_node=NULL;
    while(tergate_node->roll != update_after )
    {
       // previous_node = tergate_node; ///to update previous node next address it need to preserve
        tergate_node = tergate_node->next;
    }

        node *temp = new node();
        temp->roll =roll;
        temp->next = tergate_node->next;
        tergate_node->next = temp;


}

main()
{


    int a;
    append(1);
    append(2);
    append(6);
    print();
    //delete_node(1);
   // delete_node(2);
   // print();
    printf("\n");
    update_after_node(6,55);
    print();
    printf("\n");

    update_after_node(1,555);
    print();
   printf("\n");





}

