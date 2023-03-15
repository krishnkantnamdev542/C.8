//Write a C program to find whether a given year is a leap year or not.//
#include<stdio.h>
int main()
{
    int year;
    printf("year liao");
    scanf("%i",&year);
    if(year%4==0)
    {
        printf("leap year");
    }
    else if(year%400==0)
    {
        printf("to v leap ");
    }
    else
    {
        printf("not leap year");
    }
    return 0;
}