//Fibonacci series - 0, 1, 1, 2, 3, 5, 8, 13, 21...//
#include<stdio.h>
int main()
{
  int n,prev=0,next=1;
  printf("enter a number..");
  scanf("%i",&n);
  printf("%i %i",prev,next);
  for(int i=0;i<=n;i++)
  {
    int temp=next;
    next=prev+next;
    prev=temp;
    printf(" %i ",next);
  }
  return 0;
}