//Reverse for loop. Print n to 1.//
#include<stdio.h>
int main()
{
    int n;
    printf("integer number ...");
    scanf("%i",&n);
    for(int i=n;i>=1;i--)
    {
        printf("%i ",i);
    }
    return 0;

}