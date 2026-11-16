#include<stdio.h>
int main()
{
    int num, found = 0;
    printf("Enter number: ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++)
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
            printf("Prime number: %d\n", i);
            found = 1;
        }
    }

    if (!found)
        printf("No prime number found\n");

    return 0;
}
