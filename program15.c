//Write a C program to check whether an alphabet is a vowel or consonant. //
#include<stdio.h>
int main()
{
   char min ;
   printf("alphate:");
   scanf("%ch",&min);
    
   if(min=='a'||min=='i'||min=='e'||min=='o'||min=='u')
   {
    printf("vowel");
   }
   else
   {
    printf("consonant");
   }
   return 0;
}