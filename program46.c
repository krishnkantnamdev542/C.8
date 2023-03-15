//Mean of array elements.//
#include<stdio.h>
int main()
{
  int arr[]={1,2,3,4,5,1,2,3,4,5};
  int count=sizeof(arr)/sizeof(int);
  int sum=0;
  for(int i=0;i<count;i++)
  {
    sum=sum+arr[i];
  }
  int mean=sum/count;
  printf("%i",mean);
  return 0;
}