#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a[100],n,i,s,flag=0;
    printf("enter array limit :");
    scanf("%d",&n);
    printf("enter values : ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("which number you want search :");
    scanf("%d",&s);

    for ( i = 0; i < n; i++)
    {
        if (s==a[i])
        {
        flag=1;
        break;
        }  
    }

    if (flag==1)
    {
        printf("values found at position %d",i+1);
    }
    else
    {
        printf("item not found");
    }
    
}