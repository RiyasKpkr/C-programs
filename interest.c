#include<stdio.h>
#include<stdlib.h>
int main()
{
    int p;
    float r,n,si;
    printf("enter value of p ");
    scanf("%d",&p);
    printf("enter value of r and n ");
    scanf("%f%f",&r,&n);

    si=(p*r*n)/100;

    printf("result is %f",si);

}