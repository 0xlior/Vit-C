#include<stdio.h>
int rev(int n)
{ int r=0;
    while(n>0)
    {
        int digit= n%10;
        r=r*10+digit;
        n=n/10;
    }
    return r;

}
int main(){

    int n;
    scanf("%d", &n);
    printf("the reverse of the number is %d", rev(n) );
    return 0;
}
