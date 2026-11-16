#include<stdio.h>
int main()
{
    int num, found = 0;
    printf("Enter number: ");
    scanf("%d", &num);

    for (int j = 1; j <= num; j++)
    {
        int sum = 0;
        for (int i = 1; i < j; i++)
        {
            if (j % i == 0)
                sum = sum + i;
        }

        if (sum == j)
        {
            printf("Perfect number: %d\n", j);
            found = 1;
        }
    }

    if (!found)
        printf("No perfect number found\n");

    return 0;
}
