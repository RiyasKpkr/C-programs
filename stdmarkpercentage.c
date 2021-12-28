#include<stdio.h>
#include<stdlib.h>
int main()
{
    float total_mark;
    printf("Enter your total mark :");
    scanf("%f",&total_mark);
    if (total_mark>=90 && total_mark<=100)
    {
        printf("your Grade is A");
    }
    else if (total_mark>=80)
    {
        printf("your Grade is B");
    }
    else if (total_mark>=70)
    {
        printf("your grade is C");
    }
    else if (total_mark>=60)
    {
        printf("your grade is D");
    }
    else if (total_mark>=50)
    {
        printf("your grade is E");
    }
    else{
        printf("your Failed");
    }  
}