#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node * next;
}node;
 void traverse(node * head)
 {
    while(head!=NULL)
    {
        printf("Element :%d  ",head->data);
        head=head->next;
    }
 }
int main()
{
    node * head=(node*)malloc(sizeof(node));
    node * second=(node*)malloc(sizeof(node));
    node * third=(node*)malloc(sizeof(node));
    node * fourth=(node*)malloc(sizeof(node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next=NULL;
    traverse(head);
    return 0;

}