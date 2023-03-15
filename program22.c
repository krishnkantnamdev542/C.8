//Take a number as input and print its table
   //    5 * 1 = 5
     //  5 * 2 = 10 ... up to 10 termm
     #include<stdio.h>
     int main()
     {
        int n;
        printf("table of a number  ");
        scanf("%i",&n);
        for(int i=1;i<=10;i++)
        {
            printf("%i*%i=%i\n",n,i,n*i);
        }
        return 0;
     }