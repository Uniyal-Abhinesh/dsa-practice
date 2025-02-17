#include<stdio.h>
int main()
{
   int i,j,n;
   int ar[10];
   printf("enter the length ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    scanf("%d",&ar[i]);
   }
   for(i=0;i<n;i++)
   {
    int repeatcount=0;
    for(j=0;j<n;j++)
    {
        if(ar[i]==ar[j]&&i!=j)
        repeatcount=1;
    }
   }
  
   


}