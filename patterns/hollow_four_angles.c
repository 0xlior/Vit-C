#include<stdio.h>
void hollow_square_pattern(int n);
void hollow_rectangular_pattern(int m,int n);
void hollow_rhombus_pattern(int n);
void hollow_parallelogram_pattern(int m, int n);

int main()
{
    int num, row, col;
    printf("1. Hollow Square Pattern\n2. Hollow Rectangular Pattern\n3. Hollow rhombus star pattern\n4. hollow parallelogram pattern\nEnter the number: ");
    scanf("%d", &num);
    switch(num){
    case    1:
        printf("Enter rows/columns: ");
        scanf("%d",&row);
        printf("Here's the pattern: \n\n");
        hollow_square_pattern(row);
        break;
    case    2:
        printf("Enter rows: \n");
        scanf("%d", &row);
        printf("Enter columns: \n");
        scanf("%d", &col);
        printf("Here's the pattern: \n\n");
        hollow_rectangular_pattern(row,col);
        break;
    case    3:
        printf("Enter rows/columns: ");
        scanf("%d",&row);
        printf("Here's the pattern: \n\n");
        hollow_rhombus_pattern(row);
        break;
    case    4:
        printf("Enter rows: \n");
        scanf("%d", &row);
        printf("Enter columns: \n");
        scanf("%d", &col);
        printf("Here's the pattern: \n\n");
        hollow_parallelogram_pattern(row,col);
        break;
    default: printf("invalid number");
    }
}
void hollow_square_pattern(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++){
                if(i==1 || i==n)
                {
                    printf("* ");
                }
                else
                {
                    if(j==1 || j==n)
                        printf("* ");
                    else
                        printf("  ");
                }
        }
        printf("\n");
    }
}

void hollow_rectangular_pattern(int m,int n)
{
    for(int i=1; i<=m; i++)
    {
        for(int j=1;j<=n; j++)
        {
            if(i==1 || i==m)
            {
                printf("*");
            }
            else
            {
                if(j==1||j==n)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}

void hollow_rhombus_pattern(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int k=2;k<=i;k++) //alt: (int k = 1; k < i; k++) or (int k = 1; k <= num - i; k++)
                printf(" ");
        for(int j=1; j<=n; j++){
            if(i==1 || i==n)
                {
                    printf("* ");
                }
            else
                {
                    if(j==1 || j==n)
                        printf("* ");
                    else
                        printf("  ");
                }
        }
        printf("\n");
    }
}

void hollow_parallelogram_pattern(int m, int n)
{
     for(int i=1; i<=m; i++)
    {
            for (int k = 1; k <= m - i; k++) //alt: (int k = 1; k < i; k++) or
                printf(" ");
        for(int j=1;j<=n; j++)
        {
            if(i==1 || i==m)
            {
                printf("*");
            }
            else
            {
                if(j==1||j==n)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}
