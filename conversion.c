#include<stdio.h>
void main()
{
    int num,rem,num1,num2,decimal=0,position=1;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("num converted to binary\n");
    if(num==0)
    {
        printf("0");
    }
    else
    {
         for(;num>0;)
    {
           rem=num%2;
           decimal=decimal+(rem*position);

           num=num/2;
           position=position*10;
         

    }
      printf("%d",decimal);

    }
    printf("\nEnter number to convert octal:\n");
    scanf("%d",&num1);
    int octal=0,place=1;
    for(;num1>0;)
    {
        rem=num1%8;
        octal=octal+(rem*place);
       num1=num1/8;
       place=place*10;


    }
    printf("\nconversion of decimal to octal:\n");
    printf("%d",octal);

    printf("\nEnter the number to convert to hexadecimal\n");
    scanf("%d",&num2);
    int hexa,hexadecimal=0,place2=1;
    for(;num2>0;)
    {
        hexa=num2%16;
        hexadecimal=hexadecimal+(hexa*place2);
        num2=num2/16;
        place2=place2*10;


    }
    printf("conversion of decimal to hexadecimal is:");
    printf("%d",hexadecimal);


}