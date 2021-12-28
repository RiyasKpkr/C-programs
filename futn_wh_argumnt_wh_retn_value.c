#include<stdio.h>
#include<stdlib.h>

int sum(int,int);
int main(){
    int a,b,res;
    printf("enter 2 numbers:");
    scanf("%d%d",&a,&b);
    res=sum(a,b);
    printf("result is %d",res);

}

int sum(int num1,int num2){
    int result;
    result=num1+num2;
    return result;
}