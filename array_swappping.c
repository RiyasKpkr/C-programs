#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100],b[100],n,i,temp;
    printf("enter 1st array limit :");
    scanf("%d",&n);
    printf("enter values :");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter 2ed array limit :");
    scanf("%d",&n);
    printf("enter values :");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }

    for ( i = 0; i < n; i++)
    {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
    printf("array after swapping \n");
    printf("array 1 :");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\narray 2 :");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",b[i]);
    }
    
}