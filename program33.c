//Accept a number and check if it is a armstrong number (Sum of cube of all digits will be equal to origional number)
   //    Ex - 407 = 64 + 0 + 343 = 407
   //           153 = 1 + 125 + 27 = 153
   #include<stdio.h>
   int main()
   {
    int n,sum=0;
    printf("accept a number..");
    scanf("%i",&n);
    int copy=n;
    while(n>0)
    {
        int rem=n%10;
        sum=sum+rem*rem*rem;

        n=n/10;
    }
    if(copy==sum)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }
    return 0;
    
   }