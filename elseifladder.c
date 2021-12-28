#include<stdio.h>
#include<stdlib.h>
int main()
{
    float num1,num2,result,choice;
    printf("enter two number :");
    scanf("%f%f",&num1,&num2);
    printf("1.Addition\n2.mulltiplication\n3.substration\n4.division\nEnter your choice:");
    scanf("%f",&choice);

    if (choice==1)
    {
        result=num1+num2;
        printf("result is =%f",result);
    }
    else if (choice==2)
    {
        result=num1*num2;
        printf("result is =%f",result);
    }
    else if (choice==3)
    {
        result=num1-num2;
        printf("result is =%f",result);
    }
    else if (choice==4)
    {
        result=num1/num2;
        printf("result is =%f",result);
    }
    else
    {
        printf("are you pottan");
    } 
}  