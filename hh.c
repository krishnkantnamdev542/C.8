#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("jkhsjdhfjksh:");
    scanf("%i",&n);
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
            if(i==n/2)
            {
                printf("%i = ",i);
            }
            else
            {
                printf("%i + ",i);
            }
        }

    }
    printf("%i",sum);
    return 0;
}