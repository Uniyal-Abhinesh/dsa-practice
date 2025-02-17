//Deleting a node at a given index
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
struct node * insertionatend(struct node *head,int data)
{   int i=0;
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p=head;
    while( p->next!=NULL)
    {
        p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next=NULL;
    
    return head;
} 

struct node * deletionatgivenindex(struct node *head)
{
    int index;
    printf("Enter the index : ");
    scanf("%d",&index);
    struct node * p=head;
    struct node *q=head->next;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
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
    head->data=34;
    head->next=second;
    second->data=42;
    second->next=third;
    third->data=66;
    third->next=NULL;
    printf("Linked list before updation : \n");
    traverse(head);
    printf("linked list after updation : \n");
    head=deletionatgivenindex(head);
    traverse(head);
    return 0;
}
