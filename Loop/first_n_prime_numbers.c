#include<stdio.h>
int main()
{
    int num, found = 0;
    printf("Enter number: ");
    scanf("%d", &num); 

  // a program that prints first n prime numbers (n is input). E.g. for n = 5 it should print: 2,3,5,7,11

    for (int i = 2; found < num; i++)
    {
        int flag = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            found++;
            printf("%d,", i);
        }
    }

    return 0;
}
