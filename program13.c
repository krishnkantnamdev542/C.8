//Write a C program to find the largest of three numbers.//
#include<stdio.h>
int main()
{
    int a, b ,c;
    printf("give three number ");
    scanf("%i %i%i",&a,&b,&c);
    if(a>=b && a>=c)
    {
        printf("a is largest");
    }
    else if(b>=a && b>=c)
    {
        printf("b is largest ");
    }
    else if(c>=a && c>=b)
    {
        printf("c is largest");
    }
    return 0;
    
}