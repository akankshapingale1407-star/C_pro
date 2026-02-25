#include<stdio.h>
void main()
{
    int num,i,fact;
    printf("Enter the number which you want to find factorial:\n");
    scanf("%d",&num);
    fact=1;
    for(i=1;i<=num;i++)
    {   
        fact=fact*i;
    }
    printf("the ans is:\n");
    printf("%d",fact);

}