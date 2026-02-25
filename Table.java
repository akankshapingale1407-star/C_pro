import java.util.*;
public class Table
{
   
public static void main(String x[])
    {
        
        int num,table;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number which you want table");
        num =  sc.nextInt();
        for(int i=1;i<=10;i++)
        {
            table=num*i;
            System.out.println(table);
            
            
        }


    }
}

