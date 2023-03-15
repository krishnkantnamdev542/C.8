//Print positive and negative elements of an array//
#include<stdio.h>
int main()
{
    int arr[]={1,-2,3,-4,5,-6,7,-8};
    printf("positive number :");
    for(int i=0;i<=7;i++)
    {
        if(arr[i]>=0)
        {
            printf("%i ",arr[i]);
        }
    }
    printf("\nnegative number :");
    for(int i=0;i<7;i++)
    {
        if(arr[i]<=0)
        {
            printf("%i ",arr[i]);
        }
    }
    return 0;
}