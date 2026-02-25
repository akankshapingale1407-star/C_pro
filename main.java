import java.util.Scanner;

class Akshu
{
    String firstName;
    String lastName;
    double monthlySalary;

    //  Constructor (init)
    Akshu(String fName, String lName, double salary)
    {
        firstName = fName;
        lastName = lName;
        monthlySalary = salary;
    }

    //  Set Salary
    void setSalary(double sal)
    {
        monthlySalary = sal;
    }
    //  Display
    void empDisplay()
    {
        System.out.println("\nEmployee Details:");
        System.out.println("First Name: " + firstName);
        System.out.println("Last Name: " + lastName);
        System.out.println("Monthly Salary: " + monthlySalary);
    }
}
 class main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        //  User Input
        System.out.print("Enter First Name: ");
        String fName = sc.next();

        System.out.print("Enter Last Name: ");
        String lName = sc.next();

        System.out.print("Enter Monthly Salary: ");
        double salary = sc.nextDouble();

        //  Init Object
        Akshu e1 = new Akshu(fName, lName, salary);

        //  Display
        e1.empDisplay();

        //  Modify Salary
        System.out.print("\nEnter New Salary: ");
        double newSalary = sc.nextDouble();

        e1.setSalary(newSalary);

        //  Display Again
        System.out.println("\nAfter Salary Update:");
        e1.empDisplay();

        sc.close();
    }
}