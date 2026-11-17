#include<stdio.h>

float diameter(float r)
{
    return 2 * r;
}

float circumference(float r)
{
    return 2 * 3.1416 * r;
}

float area(float r)
{
    return 3.1416 * r * r;
}

int main()
{
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("\nThe diameter is %.4f, the circumference is %.4f, the area is %.4f\n",
           diameter(radius), circumference(radius), area(radius));
    return 0;
}
