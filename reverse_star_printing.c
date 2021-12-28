#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,n;
    printf("enter a number :");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)    //row
    {
        for ( j = i; j <=n; j++)  // star printing
        {
            printf(" * ");
        }
        printf("\n");
    }
}