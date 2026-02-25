import java.util.*;
public class Palindrome
{
    public static void main(String x[])
    {
        int num,digit=0,rem;
        System.out.println("Enter the number");
        Scanner sc = new Scanner(System.in);
        num=sc.nextInt();
        int temp=num;
        for(;num>0;)
        {
            rem=num%10;
            digit= digit*10 + rem;
           
            num=num/10;
            


        }
        if(digit==temp)
        {
            System.out.println("It is palindrome");
        }
        else
        {
            System.out.println("It is not a palindrome");
        }


    }
}