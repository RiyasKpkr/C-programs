#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,sum=0,n;
    printf("enter a number :");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        sum=sum+i;
    }
    printf("the sum is = %d",sum);  
}