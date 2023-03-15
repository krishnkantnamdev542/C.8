//Accept size n from user and create a n size array then take n inputs into the and finally 
 //     Print the sum of all elements in the array in the following manner
   //   10 + 20 + 30 = 60
   #include<stdio.h>
   int main()
   {
    int n;
    printf("emter a number..");
    scanf("%i",&n);
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
      scanf("%i",&arr[i]);
      sum=sum+arr[i];
    }
    for(int i=0;i<n;i++)
    {
      if(arr[i]==n)
      {
        printf("%i=",arr[i]);
      }
      else
      {
        printf("%i+",arr[i]);
      }
    }
    printf("%i",sum);
    return 0;
   }