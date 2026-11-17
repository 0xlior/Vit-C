#include<stdio.h>

int series(int r, int n)
{
    int term = 1, sum = 1;
    for (int i = 0; i < n; i++)
    {
        term = term * r;
        sum = sum + term;
    }
    return sum;
}

int main()
{
    int r, n;
    printf("Enter r and n: ");
    scanf("%d %d", &r, &n);
    printf("The sum of the series is %d\n", series(r, n));
    return 0;
}
