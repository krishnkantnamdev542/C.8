//Sum of digits of a number, 936 = 18//
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("numbers..");
    scanf("%i",&n);
    while(n>0)
    {
        int rem=n%10;
        sum=sum+rem;
         n=n/10;
    }
    printf("%i",sum);
    return 0;
}