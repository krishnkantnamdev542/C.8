//Accept array elements and reprint it//
#include<stdio.h>
int main()
{
    int arr[10];
    printf("accept array element ");
    for(int i=0;i<10;i++)
    {
        scanf("%i",&arr[i]);
    }
    
    for(int i=0;i<10;i++)
    {
        printf("%i ",arr[i]);
    }
    return 0;
}