#include<stdio.h>
#include<stdlib.h>
int main()
{
    float mark;
    printf("Enter Student mark :");
    scanf("%f",&mark);
    if (mark>=50)
    {
        printf("your mark is %f and you passed ",mark);
    }else{
        printf("your mark is %f and you failed",mark);
    }
    
}
