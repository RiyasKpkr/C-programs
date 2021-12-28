#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,temp;

    printf("enter a numer : ");
    scanf("%d",&a);
    printf("enter b number : ");
    scanf("%d",&b);

    a=a+b;  
    b=a-b;
    a=a-b;

    temp=a;
    a=b;
    b=temp;
    

    printf("a:%d\nb:%d",a,b);


}
