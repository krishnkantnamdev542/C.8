//accept marks of 4 subjects and calculate percentage if percentage is below 35% - F
//   below 45% - D below 55% - C below 75% - B above 75% - A 

#include<stdio.h>
int main()
{
    int m,n,b,v;
    printf("subjects:");
    scanf("%i %i %i %i ",&m,&n,&b,&v);
   int percentage=(m+n+b+v)/4;
   if(percentage<35)
   {
    printf("f");
   }
   else if(percentage<45)
   {
    printf("d");
   }
   else if(percentage<55)
   {
    printf("c");
   }
   else if(percentage<75)
   {
    printf("b");
   }
   else if(percentage>75)
   {
    printf("a");
   }
   return 0;
}