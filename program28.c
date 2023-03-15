//Print the sum of all even & odd numbers seperately.//
#include<stdio.h>
int main()
{
    int n;
    int evensum=0,oddsum=0;
    printf("enter three inputs..");
    scanf("%i",&n);
    for(int i=2;i<=n;i=i+2)
    {
        evensum=evensum+i;
    }
    printf("%i ",evensum);
    for(int i=1;i<=n;i=i+2)
    {
       oddsum=oddsum+i;
    }
    printf("\n%i ",oddsum);
      return 0;
}