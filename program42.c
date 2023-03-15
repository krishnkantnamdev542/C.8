//Print array elements in reverse order//
#include<stdio.h>
int main()
{
   int arr[8];
   printf("accept bahut number ");
   for(int i=0;i<8;i++)
   {
    scanf("%i",&arr[i]);
   } 
   
   for(int i=7;i>=1;i--)
   {
    printf("%i ",arr[i]);
   }
   return 0;
}