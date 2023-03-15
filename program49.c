//Find the second greatest element 
//      {2, 96, 69, 77, 145, 20} = Second greatest element = 96
#include<stdio.h>
int main()
{
    int arr[]={12,64,32,45,34};
    int count=sizeof(arr)/sizeof(int);
    int greatestindex=0;
    for(int i=1;i<count;i++)
    {
        if(arr[i]>arr[greatestindex])
        {
          greatestindex=i;  
        }
    }
    int segi=0;
    for(int i=1;i<count;i++)
    {
        if(arr[i]>arr[segi]!=arr[greatestindex])
        {
          segi=i;  
        }
    }
       printf("sge=%i and sgi=%i",arr[segi],segi);
    return 0;
}