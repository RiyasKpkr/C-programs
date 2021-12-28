#include<stdio.h>
#include<stdlib.h>

void main()
{
    int j,i,value[3][3];
    printf("enter values :");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)  
        {
            scanf("%d",&value[i][j]);
        }  
    }
    printf("entered values are \n");  // printing statement

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)   
        {
             printf("%d\t",value[i][j]);
        }
        printf("\n");
    }
}