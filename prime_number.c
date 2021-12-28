#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,i,flag=0;
    printf("enter a number :");
    scanf("%d",&num);
    for ( i = 2; i <num/2; i++)
    {
        if (num%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("number is prime number");
    }
    else
    {
        printf("number is not prime number");
    }
    
    
    
}
