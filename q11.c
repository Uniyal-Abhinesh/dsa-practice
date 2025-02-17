//Inserting a node after a node in a linked list 
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
struct node * insertionafter(struct node *head,struct node *prevnode,int data)
{  
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p=head;
    ptr->data=data;
    ptr->next=prevnode->next;
    prevnode->next=ptr;
    
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
    printf("\nlinked list after updation ::\n");
    head=insertionafter(head,second,99);
    traverse(head);
    return 0;
}
