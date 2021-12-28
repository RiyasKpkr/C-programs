#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[100],n,i,j,temp;
    printf("enter array limit :");
    scanf("%d",&n);
    printf("enter values :");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for ( i = 0; i < n-1; i++)
    {
        for ( j =i+1; j < n; j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        } 
    }
    printf("sorted array :");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
      
}