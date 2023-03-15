//Accept two numbers from user and swap their values without using third variable//
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter two value ...");
    scanf("%i %i",&n1,&n2);
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("first =%i\n",n1);
    printf("second =%i\n",n2);
    return 0;

}