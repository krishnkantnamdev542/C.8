//Accept an integer and Print hello world n times//
#include<stdio.h>
int main()
{
    int n;
    printf("accept an integer..");
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
        printf("hello world ");
    }
    return 0;
}