
#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    struct node * left;
    int data;
    struct node * right;
}node;
node*createnode(int data)
{
    node *n=(node*)malloc(sizeof(node));
    n->left=NULL;
    n->right=NULL;
    n->data=data;
}
void preOrder(node *root)
{
    if(root!=NULL)
    {
        printf(" %d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
int main()
{
    node *p=createnode(4);
    node *p1=createnode(1);
    node*p2=createnode(6);
    node*p3=createnode(5);
    node*p4=createnode(2);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    preOrder(p);
    return 0;
}