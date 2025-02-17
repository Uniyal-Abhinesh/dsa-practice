#include<stdio.h>
int main()
{
    int arr[100],i,j,n,temp,k;
    printf("Enter the no of elements");
    scanf("%d",&n);
    printf("Enter the value of k :");
    scanf("%d",&n);
    
    printf("\n Enter the element : ");
    for(i=0;i<n;i++)
    { 
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++)
    { 
        scanf("%d",&arr[i]);

    }
    for(j=1;j<=k;j++)
    {
    temp=arr[0];
    for(i=0;i<=n-1;i++)
    {
      arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    }
    for(i=0;i<n;i++)
    { 
        printf("%d",arr[i]);

    }
    return 0;
}