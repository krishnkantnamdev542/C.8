//Find the greatest element and print its index too.
//      {2, 96, 69, 77, 145, 20} = Max element = 145 found at 4 index
#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int count=sizeof(arr)/sizeof(int);
    int greatestindex=0;
    for(int i=1;i<count;i++)
    {
      if(arr[i]>arr[greatestindex])
      {
        greatestindex=i;
      }
    }
    printf("greatest index is = %i and gretest element is = %i",greatestindex,arr[greatestindex]);
    return 0;

}