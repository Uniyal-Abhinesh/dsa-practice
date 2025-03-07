#include<stdio.h>
#include<stdlib.h>
typedef struct queue
{
    int size;
    int f;
    int r;
    int *ar;
}queue;
int isEmpty(queue*q)
{
    if(q->f==q->r)
    return 1;
    else
    return 0;
}
int isFull(queue*q)
{
  if(q->r==q->size-1)
  return 1;
  else
  return 0;
}
void enqueue(queue*q,int value)
{
    if(isFull(q))
    {
        printf("Queue is full");
    }
    else{
        q->r++;
        q->ar[q->r]=value;
    }
}
int dequeue(queue*q)
{   int a=-1;
    if(isEmpty(q))
    {
        printf("Queue is empty");
    }
    else{
        q->f++;
        a=q->ar[q->f];
    }
    return a;
}
int main()
{
    queue q;
    q.size=400;
    q.f=q.r=0;
    q.ar=(int*)malloc(q.size*sizeof(int));
    
    int visited[7]={0,0,0,0,0,0,0};
    int a[7][7]={
                {0,1,1,1,0,0,0},
                {1,0,1,0,0,0,0},
                {1,1,0,1,1,0,0},
                {1,0,1,0,1,0,0},
                {0,0,1,1,0,1,1},
                {0,0,0,0,1,0,0},
                {0,0,0,0,1,0,0},
    };
    int i=1;
    printf("%d",i);
    visited[i]=1;
    enqueue(&q,i);
    while(!isEmpty(&q))
    {   int node=dequeue(&q);
        for(int j=0;j<7;j++)
        {
            if(a[node][j]==1&&visited[j]==0)
            {
                printf("%d",j);
                visited[j]=1;
                enqueue(&q,j);
            }
        }
    }
 return 0;
}