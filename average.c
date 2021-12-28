#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a,b,c,avg;
    printf("enter 1st number :");
    scanf("%f",&a);
    printf("enter 2ed number : ");
    scanf("%f",&b);
    printf("enter 3rd number : ");
    scanf("%f",&c);
    avg=(a+b+c)/3;
    printf("average is %f ", avg);
}