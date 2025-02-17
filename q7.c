//traversal in a singly link list
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

    return 0;
}
