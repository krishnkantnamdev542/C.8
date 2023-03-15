//Print the sum of all factors of a number, 50 - 1 + 2 + 5 + 10 + 25 = 43//
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("factors..");
    scanf("%i",&n);
    for(int i=1;i<=n/2;i++)
    {
        
        if(n%i==0)
        {
            if(i==n/2)
            {
                printf("%i = ",i);
            }
            else
            {
                printf("%i + ",i);
            }
              sum=sum+i;
        }
       
    }
    printf("%i",sum);
    return 0;

}