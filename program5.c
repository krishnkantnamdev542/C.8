//Write a C program that converts kilometers per hour to miles per hour.//
#include<stdio.h>
int main()
{
    int km;
    printf("km per hour:");
    scanf("%i",&km);
    printf("%f miles per hour",km*.621);
    return 0;
}