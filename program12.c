//)Write a C program to accept the height of a person in centimeter and categorize the person
 //  according to their height if below 150 he is dwarf if above 150 and below 200 average and 
 //  above 200 tall//

 #include<stdio.h>
 int main()
 {
    int height;
    printf("height ");
    scanf("%i",&height);
    if(height<150)
    {
        printf("draft");
    }
    else if(height>150 && height<200)
    {
        printf("avetage");
    }
    else if(height>200)
    {
        printf("tall");
    } 
    return 0;
 }