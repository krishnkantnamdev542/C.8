//Binary Search. If element found print the index else -1//
#include<stdio.h>
int main()
{
    int arr[]={12,13,14,15,16,17,18};
    int count=sizeof(arr)/sizeof(int);       
    int check=13;
    int start=0;
    int end=count-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==check)
        {
          printf("mil gaya");
          break;
        }
        
        
        else if(arr[mid]<check)
        {
            start=mid+1;
            mid=(start+end)/2;
            printf("ha mil gaya");
            break;
        }
        else if(arr[mid]>check)
        {
            end=mid-1;
            mid=(start+end)/2;
            printf("o mil gaya");
            break;
        }
         else
        {
            printf("hai hi nahi");
        }
        
       
    }
    return 0;
}

