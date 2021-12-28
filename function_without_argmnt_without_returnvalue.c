#include<stdio.h>
#include<stdlib.h>

void sum();
int main(){
    sum();
    return(0);

}

void sum(){
    int num1,num2,sum;
    printf("ewnter 2 number :");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    printf("reult is %d",sum);
}