#include<stdio.h>
void hollow_triangle_pattern(int n);

int main(){
  int height; 
printf("Enter height: ");
scanf("%d", &height);
hollow_triangle_pattern(height);
}
void hollow_triangle_pattern(int n)
{
    for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= i; j++)
    {
        if (j == 1 || j == i || i == n)
            printf("*");
        else
            printf(" ");
    }
    printf("\n");
}
}
