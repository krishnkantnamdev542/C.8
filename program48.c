// Find the smallest element and print its index too.
//      {2, 96, 69, 77, 145, 20} = Min element = 2 found at 0 index
#include<stdio.h>
int main()
{
    int arr[]={2,3,4,5,1};
    int count=sizeof(arr)/sizeof(int);
   int smallestindex=0;
   for(int i=1;i<count;i++)
   {
    if(arr[i]<arr[smallestindex])
    {
        smallestindex=i;
    }
   }
   printf("smallest element is =%i found at %i index",arr[smallestindex],smallestindex);
   return 0;
}