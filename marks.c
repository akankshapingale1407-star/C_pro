#include<stdio.h>
void main()
{
    int marks;
    printf("Enter the marks:\n");
    scanf("%d",&marks);
    if(marks>90)
    {
        printf("distinction");
    }
    else if(marks<90 && marks>=80)
    {
        printf("grade is a");

    }
     else if(marks<80 && marks>=70)
    {
        printf("grade is b");

    }
    else if(marks<70 && marks>=60)
    {
        printf("grade is c");

    }
    else
    {
    printf("grade is f");

    }
}