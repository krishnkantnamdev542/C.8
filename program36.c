//Accept a number and check if it is a Harshad number 
//      Harshad number is a number or an integer which is completely divisible by sum of  its digits.
  //    Ex - 24 = Sum of 2+4 = 6 & 24%6 = 0
  #include<stdio.h>
  int main()
  {
    int n,sum=0;
    printf("accept a integer..");
    scanf("%i",&n);
    int check=n;
    while(n>0)
    {
      int rem=n%10;
      sum=sum+rem;
      n=n/10;
    }
    if(check%sum==0)
    {
      printf("harshad hai..");
    }
    else
    {
      printf("not harshad");
    }
     return 0;
  }