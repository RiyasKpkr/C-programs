#include<stdio.h>
#include<stdlib.h>

int sum();
int main(){

    int k;
    k=sum();
    printf("%d",k); 
    
}

int sum(){
    int a,b,c;
    printf("enter 2 number : ");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;

}
