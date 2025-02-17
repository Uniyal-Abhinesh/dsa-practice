//INSERTION OF NODE BETWEEEN 2  LINKED LIST OF THE GIVEN INDEX
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void traverse(struct node *head)
{
    while(head!=NULL)
   { printf(" Elements :: %d\n",head->data);
    head=head->next;
   }
}
struct node * insertionin_between(struct node *head,int data,int index)
{   int i=0;
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p=head;
    while( i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
} 
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    head->data=3;
    head->next=second;
    second->data=4;
    second->next=third;
    third->data=6;
    third->next=NULL;
    traverse(head);
    head=insertionin_between(head,39,1);
    traverse(head);
    return 0;
}
