#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100],i,limit;
    printf("enter array limit : ");
    scanf("%d",&limit);
    printf("enter values :");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("entered values are :");
    for ( i = 0; i < limit; i++)
    {
       printf("%d \n",a[i]);
    }

    
}