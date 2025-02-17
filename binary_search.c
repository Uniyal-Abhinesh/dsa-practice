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
void inOrder(node *root)
{
    if(root!=NULL)
    {
        inOrder(root->left);
        printf(" %d ",root->data);
        inOrder(root->right);
    }
}
int isbst(node *root)
{   static node *prev=NULL;
    if(root!=NULL)
    {
        if(!isbst(root->left))
        {
            return 0;
        }
        if(prev!=NULL&&root->data<=prev->data)
        {
            return 0;
        }
        prev=root;
        return isbst(root->right);
    }
    else
    return 1;
}
int main()
{ 
    node *p=createnode(5);
    node *p1=createnode(3);
    node*p2=createnode(6);
    node*p3=createnode(1);
    node*p4=createnode(4);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    inOrder(p);
    int n=isbst(p);
    if(!n);
    {
        printf("NOT A BST");
    }
    
    return 0;

}