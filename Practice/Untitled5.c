#include<stdio.h>
struct link{
    struct link *parent,*child;
    //int d,key;
    char data;
};
typedef struct link node;
node *head,*ed,*arr[3000];
int chekch[35]={0};
int size=5,c=0;
void del(node *pa,node *temp,node *cl)
{
    pa->child=cl;
    cl->parent=pa;
}

void print(node *root)
{
    while(root!=NULL)
    {
        if(root->child==NULL)
            printf("%c ",root->data);
        else printf("%c-",root->data);
        root=root->child;
    }
    printf("\n");
}
void set(char ch)
{
    node *curr;
     curr=(node *)malloc(sizeof(node));
     curr->parent=NULL;
     curr->child=NULL;
     curr->data=ch;
     if(c==0)
     {
         head=curr;
         ed=head;
         arr[ch-65]=curr;
         chekch[ch-65]=1;
         c++;
     }
     else if(c<size)
     {
         if(chekch[ch-65]==0)
         {
             ed->child=curr;
             curr->parent=ed;
             ed=curr;
             c++;
             arr[ch-65]=curr;
         chekch[ch-65]=1;
         }
         else{
            node *temp=arr[ch-65];
            //printf("\n%c\n",temp->data);
            //printf("before\n");

            if(temp!=head & temp!=ed){
            del(temp->parent,temp,temp->child);ed->child=curr;
             curr->parent=ed;
             ed=curr;}
            else if(temp==head ){
                    if(c!=1){
                    head=head->child;
                    ed->child=curr;
                    curr->parent=ed;
                    ed=curr;
                    }
            }
                arr[ch-65]=curr;

            }




     }
     else{
        if(chekch[ch-65]==0)
         {
             chekch[head->data-65]=0;
             head=head->child;
             ed->child=curr;
             curr->parent=ed;
             ed=curr;
            arr[ch-65]=curr;
            chekch[ch-65]=1;
         }
         else{
             node *temp=arr[ch-65];
            //printf("\n%c\n",temp->data);
           // printf("before\n");

            if(temp!=head & temp!=ed){
            del(temp->parent,temp,temp->child);ed->child=curr;
             curr->parent=ed;
             ed=curr;}
            else if(temp==head ){
                    if(c!=1){
                    head=head->child;
                    ed->child=curr;
                    curr->parent=ed;
                    ed=curr;
                    }
                    arr[ch-65]=curr;
            }

         }
     }

}
int main()
{

    char  A[500];
    gets(A);
    int  i=0,l;
    l=strlen(A);
    while(i<l)
    {

        if(A[i]>='A' && A[i]<='Z')
        set(A[i]);
        i++;
    }
    print(head);
}
