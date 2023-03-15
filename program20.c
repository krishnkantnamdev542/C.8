//Print natural number up to n. /
#include<stdio.h>
int main()
{
    int n;
    printf("natural numbers...");
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%i ",i);
    }
    return 0;
}