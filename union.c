#include<stdio.h>
#include<stdlib.h>
void un(int *a[],int *b[],int n,int m)
{
  for(int i=0;i<m;i++)
  {
    
  }  
}
int main()
{
    int a[100],b[100],n,m,i;
    printf("Enter the no of elements you want to enter : \n");
    printf("Enter the no of elements you want to enter : ");
    scanf("%d",&n);
    scanf("%d",&m);
    printf("Enter th element : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    printf("Enter the elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",b[i]);
    }
    un(&a,&b,n,m);
    return 0;

}