//Print all the numbers which are either divisible by 3 or 5 in a range//
#include<stdio.h>
int main()
{
    int start,end;
    printf("enter a number ");
    scanf("%i %i",&start,&end);
    for(int i=start;i<=end;i++)
    {
        if(i%3==0&&i%5==0)
        {
            printf("%i ",i);
        }
       
    }
    return 0;
}