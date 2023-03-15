//Write a C program to check whether a given number is positive or negative.//
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%i",&n);
    if(n>0)
    {
        printf("positive");
    }
    else if(n==0)
    {
        printf("neither positive nor negative");
    }
    else
    {
        printf("negative");
    }
    return 0;
}