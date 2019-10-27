#include<bits/stdc++.h>
using namespace std;

struct node{
 int roll;
 node *next,*prev;
};
node *root, *tail;



void print()
{
    node *tergate_node=root;
    printf("Forward order\n");
    while(tergate_node != tail )
    {
        printf("%d",tergate_node->roll);
        tergate_node  = tergate_node->next;
    }
    printf("\nReverse Order\n");
    tergate_node = tail;
    while(tergate_node->prev != NULL)
    {
        printf("%d",tergate_node->roll);
        tergate_node = tergate_node->prev;
    }
}
void append(int roll)
{
  node *new_node = new node();
  new_node->roll = roll;
  new_node->next = new_node;
  new_node->prev = new_node;


  if(root == NULL)
  {
      root = new_node;
      tail = new_node;
  }
  else
  {
      new_node->next = root;
      new_node->prev = tail;
      root->prev = new_node;
      tail = new_node;


  }

}
main()
{
    append(1);
    append(2);
    append(3);
    print();
}
