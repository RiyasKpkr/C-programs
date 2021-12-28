#include<stdio.h>
#include<stdlib.h>
int main()
{
      int num1,num2;
      printf("enter numbers :");
      scanf("%d%d",&num1,&num2);
      if (num1<num2)
      {
          printf("num2 is grater %d",num2);
      }
       else{
           printf("num1 is grater %d",num1);
       }
}