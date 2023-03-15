#include<stdio.h>
int main()
{
    int n,rev=0;
    printf("shfhsa:");
    scanf("%i",&n);
    int copy=n;
    while(n>0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==copy)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
return 0;

    
}