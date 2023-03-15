//Print all the factors of a number.//
#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("number do");
    scanf("%i",&n);
    for(int i=1;i<=n/2;i++)
    {
      if(n%i==0)   
      {
      printf("%i ",i);
      }
    }
    return 0;


}