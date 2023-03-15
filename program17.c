//Accept two numbers from user and swap their values//
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("accept two number:");
    scanf("%i%i",&n1,&n2);
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
    printf("first value = %i\n",n1);
    printf("second value =%i",n2);
    return 0;

}