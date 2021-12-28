#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j;
    printf("enter a number :");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)    //row
    {
        for ( j = 0; j <i; j++)
        {
             printf(" * ");
        }
        printf("\n");
    }
}