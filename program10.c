//Write a C program to read the age of a candidate and determine whether it is eligible
  //  for casting his/her own vote.

  #include<stdio.h>
  int main()
  {
    int age;
    printf("age do:");
    scanf("%i",&age);
    if(age>18)
    {
        printf("votar hai");
    }
    else if(age==18)
    {
        printf("to v votar hai");
    }
    else
    {
        printf("votar nahi hai");
    }
    return 0;

  }