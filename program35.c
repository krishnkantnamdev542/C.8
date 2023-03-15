//Accept a number and check if it is a strong number or not (Sum of factorial of each digit)
 //      Ex- 145 = 1! + 4! + 5! = 145
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
    int fact=1;
    for(int i=1;i<=rem;i++)
    {
      fact=fact*i;
    }
    sum=sum+fact;
    n=n/10;
  }
   if(check==sum)
  {
    printf("strong hai..");
  }
    else
  {
    printf("not strong hai");
  }
    return 0;
}