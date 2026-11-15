
//Prints a diamond that alternates between * and # by row

#include <stdio.h>

int main() {

   int num,j, i, k;
   printf("Enter the number: ");
   scanf("%d", &num);
  
    for(i=1; i<=num; i++)
        {
            for(j=num;j>i; j--)
                {
                    printf(" ");
                }
            for(k=1; k<=i; k++){
                if(i%2!=0)
                    printf("*");
                if(i%2==0)
                    printf("#");
            }

            printf("\n");
        }
    for(i=num; i>1; i--)
        {
            for(j=num; j>=i; j--)
                {
                    printf(" ");
                }
            for(k=2; k<=i; k++){
                if(i%2!=0)
                    printf("#");
                if(i%2==0)
                    printf("*");
            }

            printf("\n");
        }
  return 0;
}
