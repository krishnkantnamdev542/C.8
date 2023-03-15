//Accept a number and check if it is a pallindromic number (If number and its reverse are equal)
    //   Ex - 12321 - Rerverse - 12321//
    #include<stdio.h>
    int main()
    {
        int n,rev=0;
        printf("accept a number..");
        scanf("%i",&n);
        int copy=n;
        while(n>0)
        {
            int rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
        if(copy==rev)
        {
            printf("pellindrom\n");
        }
        else
        {
        printf("not pellindrom\n");
        }
        printf("%i",rev);
        return 0;
    }