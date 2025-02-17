//INSERTION OF A NODE AT THE END OF THE LINKEDLIST
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
    traverse(head);
    printf("linked list after updation ::");
    head=insertionatend(head,82);
    traverse(head);
    return 0;
}
