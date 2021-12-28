#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100],n,i,sum=0;
    printf("enter array limit :");
    scanf("%d",&n);
    printf("enter numbers :");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for ( i = 0; i < n; i++)
    {
        sum=sum+a[i];
    }
    printf("array sum is = %d",sum);
    
}