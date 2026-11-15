// Prints the sum of the series 1/1! + 2/2! + ... + n/n!

#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    double term= 1.0, sum= 0.0,fact=1.0;
    for(int i=1; i<= num; i++)
        {
            fact= fact*i;
            term= i/fact;
            sum= sum+term;
        }
    printf("The sum of the series is: %.4f", sum);

    return 0;
}
