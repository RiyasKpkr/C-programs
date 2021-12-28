#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice;
    printf("1.poratta\n2.biriyani\n3.rice\n4.mandhi\nEnter a your choice :");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("you selected poratta");
        break;
    case 2:
        printf("you selected biriyani");
        break;
    case 3:
        printf("you selected rice");
        break;
    case 4:
        printf("you seloected mandhi");
        break;
    
    default:
        printf("ibade ithane ollu");
        break;
    }

}