#include<stdio.h>

int main()
{
   int num;
   printf("Enter height: ");
   scanf("%d",&num);

   for(int i=1; i<=num; i++)
   {

     for(int k=num; k>i;k--)
        printf(" ");
     for(int j=1; j<=i; j++)
        printf("%c ", 'A'+(i-1));
       printf("\n");
   }

   return 0;
}
