#include<stdio.h>
void main()
{
    int num,i,c;
    printf("Enter the number:\n");
    scanf("%d",&num);
    int a=0,b=1;
    printf("%d\t%d\t",a,b);
    
    for(i=1;i<=num;i++)
    {   
       
        c= a+b;
        a=b;
        b=c;
        printf("%d\t",c);
    }
    
}