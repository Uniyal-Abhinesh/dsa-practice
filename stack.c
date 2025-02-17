
//Implementing stack using array
#include<stdio.h>
#include<stdlib.h>
#define max 5
void push(int stack[],int *top,int value)
{
    if(*top==max-1)
    {
        printf("stack overflow");
    }
    else
    {
        (*top)++;
        stack[*top]=value;
     
    }
}
int pop(int stack[],int *top)
{
    if(*top==-1)
    {
        printf("underflow condition");
    }
    else
    {
        int popedval=stack[*top];
        (*top)--;
        printf("the poped value is %d : ",popedval);
    }
    return 0;
}
int peek(int stack[],int *top)
{
    if(*top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("the top element is %d : ",stack[*top]);
    }
    return 0;
}
int display(int stack[],int *top)
{
    if(*top==-1)
    {
        printf("stack is empty ");
    }
    else
    {
        for(int i=*top;i>=0;i--)
        {
            printf("%d\n",stack[*top]);
        }
    }
    return 0;
}
int main()
{
    int stack[max];
    int top=-1;
    int choice,value;
   
    while(1)
    {
        printf("\n MENUE \n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.peek\n");
        printf("4.display\n");
        printf("5.exit\n");
         printf("Enter your choice : ");
         scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        printf("enter the value to be pushed : ");
        scanf("%d",&value);
        push(stack,&top,value);
        break;
        case 2:
        pop(stack,&top);
        break;
        case 3:
        peek(stack,&top);
        break;
        case 4: 
        display(stack,&top);
        break;
        case 5: 
        exit(0);
        default:
        printf("Invalid choice! ");
    }
    }
    return 0;

    }

