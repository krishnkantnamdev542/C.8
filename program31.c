//Accept a number and print its reverse//
#include<stdio.h>
int main()
{
    int n,rev=0;
    printf("accept a number...");
    scanf("%i",&n);
    while(n>0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        
    }
        printf("%i ",rev);
   
    return 0;
}