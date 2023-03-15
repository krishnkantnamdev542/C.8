//Sum up to n terms.//
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("sum up to an terms...");
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%i ",sum);
    return 0;
}