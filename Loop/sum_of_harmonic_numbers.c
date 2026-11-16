#include<stdio.h>
//the series: 1/1+ (1/1+1/2)+(1/1+1/2+1/3)+...(1/1+1/2+...1/n)
int main()
{
   int num;
   printf("Enter the number: ");
   scanf("%d",&num);
   double sum=0.0, term=0.0, a=1.0;
   for(int i=1; i<=num; i++)
   {
       a= 1.0/i;
       term= term+ a;
       sum= sum+ term;
   }
   printf("%.4f", sum);
   return 0;
}
