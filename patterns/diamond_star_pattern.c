#include<stdio.h>

int main()
{
   int num;
   printf("Enter height: ");
   scanf("%d",&num);

   for(int i=1; i<=num; i++)
   {
    for(int k=num; k>=i; k--)
        printf(" ");
    for(int j=1; j<=2*i-1; j++)
        printf("*");
    printf("\n");
    }
    for(int i=2;i<=num; i++)
    {
        for(int k=1; k<=i; k++)
            printf(" ");
        for(int j=1; j<=2*(num-i)+1; j++)
            printf("*");
        printf("\n");

    }
   return 0;
}
