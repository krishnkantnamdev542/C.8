//Write a C program to accept two integers and check whether they are equal or not.
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter two number:");
    scanf("%i %i",&n1,&n2);
    if(n1==n2)
    {
        printf("equal ");
    }
    else
    {
        printf("not equal");
    }
    return 0;
}