//insertion after a node
#include<stdio.h>
#include<stdlib.h>
 typedef struct node
 {
    int data;
    struct node * next;
    struct node*prev;
 } node;
 void traverse(node *head)
 {
    node*ptr=head;
    do
    {
        printf("the elements are : %d\n",ptr->data);
        ptr=ptr->next;
    } while (ptr!=head);
    
 }
 node *insertionatpos(node *head)
 {
    node *ptr=head;
     node *temp=head;
     temp=(node*)malloc(sizeof(node));
    int pos,count=1,value;
    printf("Enter the value : ");
    scanf("%d",&value);
    printf("Enter the position : ");
    scanf("%d",&pos);
    do
    { 
        count++;
        ptr=ptr->next;
    }
    while(ptr!=head);
    if(count<pos)
    {
        printf("Position does not exists");

    }
    else if(count==pos)
    {
       
        do
        {
         ptr=ptr->next;
        }while(ptr!=head);
        temp->data=value;
        ptr->prev->next=temp;
        temp->prev=ptr->prev;
        temp->next=ptr;
        ptr->prev=temp;
    }
    else
    {  count=0;
        do
        {
            ptr=ptr->next;
            count++;
            if(count==pos)
            {
                break;
            }

        }
        while(ptr!=head);
        temp->data=value;
        ptr->prev->next=temp;
        temp->prev=ptr->prev;
        temp->next=ptr;
        ptr->prev=temp;

    }
    return head;

 }

 int main()
 {
    node *head,*second,*third;
    head=(node*)malloc(sizeof(node));
    second=(node*)malloc(sizeof(node));
    third=(node*)malloc(sizeof(node));
    head->data=1;
    head->next=second;
    head->prev=third;
    second->data=2;
    second->next=third;
    second->prev=head;
    third->data=3;
    third->next=head;
    third->prev=second;
    traverse(head);
    head=insertionatpos(head);
    traverse(head);
    return 0;


 }