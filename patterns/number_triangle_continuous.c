#include<stdio.h>

int main()
{
   int num;
   printf("Enter height: ");
   scanf("%d",&num);
int count=0;
   for(int i=1; i<=num; i++)
   {
    for(int j=1; j<=i; j++)
    {
        count++;
        if(count==10)
            count=0;
        printf("%d", count);
    }

    printf("\n");
    }
   return 0;
}
