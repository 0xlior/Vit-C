#include<stdio.h>
int main()
{
    int m, n, sum=0;
    printf("Enter the starting number and the ending number: ");
    scanf("%d %d", &m, &n);

    if (m < 2)
        m = 2;
   for(int i=m; i<=n; i++)
   {
       int flag=0;
       for(int j=2; j<i; j++)
       {
           if(i%j==0)
           {
               flag++;
               break;
           }
       }
       if(flag==0)
   {
       sum= sum+i;
   }
   }
printf("The sum is %d", sum);
    return 0;
}
