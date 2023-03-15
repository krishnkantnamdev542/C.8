//Write a C program to calculate profit and loss on a transaction accept cost price and
//   selling price.
#include<stdio.h>
int main()
{
    int cp,sp,amt;
    printf("prizes...");
    scanf("%i %i",&cp,&sp);
    if(sp>cp)
    {
        amt =sp-cp;
        printf("profit =%i",amt);
    }
    else if(sp<cp)
    { 
        amt= cp-sp;
        printf("loss=%i",amt);
    
    }
    else
    {
        printf("neither profit nor loss");
    }
    return 0;

}