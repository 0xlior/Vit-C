#include<stdio.h>

int main()
{
   int num;
   printf("Enter height: ");
   scanf("%d",&num);
int count=0;
   for(int i=1; i<=num; i++)
   {
       for(int k=num; k>=i; k--)
        printf(" ");
    for(int j=1; j<=(2*i-1); j++) //2(1,2,3,4) - 1 = 1,3,5,7,9
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
