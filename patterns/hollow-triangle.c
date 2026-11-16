#include<stdio.h>
//right aligned hollow right-triangle
int main()
{
   int num;
   printf("Enter height: ");
   scanf("%d",&num);

   for(int i=1; i<=num; i++)
   {

       for(int k=1; k<=i; k++)
        printf(" ");
     for (int j = num; j >= i; j--)
     {
         if(i==1||j==num||j==i)
            printf("*");

         else
         {
            printf(" ");
         }
     }

       printf("\n");
   }

   return 0;
}
