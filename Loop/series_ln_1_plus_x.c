// Sum of the series x - x^2/2 + x^3/3 - x^4/4 + ... up to n terms

#include <stdio.h>

int main()
{
    int n, x, nume=1;
    float term, sum=0.0;
    printf("Enter number of n and x ");
    scanf("%d %d", &n, &x);

    for(int i=1; i<=n; i++)
        {
            nume=nume*x;
            term= (float)nume/i;
            if(i%2==0)
                sum=sum-term;
            else
                sum=sum+term;
                
        }
    printf("%.4f", sum);
   
    return 0;
}
