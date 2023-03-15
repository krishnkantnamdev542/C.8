// Accept a number and check if it a perfect number or not.
 //     A number whose sum of factors(excluding number itself)  = Number 
  //    Ex -  6 = 1, 2, 3 = 6//
  #include<stdio.h>
  int main()
  {
    int n,sum=0;
    printf("main tera hero..");
    scanf("%i",&n);
    int copy=n;
    while(n>0)
    { 
         int rem=n%10;
        int fact=1;
        for(int i=1;i<=n/2;i++)
        {
        fact=fact+i;
        }
       
        sum=sum+fact;
        n=n/10;
    }
  
    return 0;
  }