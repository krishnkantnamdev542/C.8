//)Write a program in C that takes minutes as input, and display the total number of hours and
//  minutes.
 // Expected Output :
//  Input minutes: 546
//  9 Hours, 6 Minutes

#include<stdio.h>
int main()
{
    int min;
    printf("minute de do:");
    scanf("%i",&min);
    printf("%i hour, %i minutes",min/60,min%60);
    return 0;

}