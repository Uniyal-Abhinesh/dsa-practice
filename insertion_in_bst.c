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
node*search(node *root,int key)
{
    if(root==NULL)
    return NULL;
    if(root->data==key)
    return root;
    else if(root->data<key)
    return search(root->left,key);
    else
    return search(root->right,key);
}
void insert(node *root,int key)
{
    node*prev=NULL;
    while(root!=NULL)
    {
        prev=root;
        if(root->data<key)
        {
            root=root->right;
        }
        else
        root=root->left;
    }
    node*new=createnode(key);
    if(key<prev->data)
    {
        prev->left=new;
    }
    else
    prev->right=new;
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
    insert(p,10);
    inOrder(p);
     return 0;

}