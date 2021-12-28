#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1, num2, num3;
    printf("enter the 3 numbers : ");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2){
        if (num1>num3)
        {
            printf("the largest number is %d",num1);
        }
        else{
            printf("the largest number is %d",num3);
        }
    }
        else {
            if (num2>num3)
            {
                printf("the largest number is %d",num2);
            }
            else{
                printf("the largest number is %d",num3);
            }
            
        }
}