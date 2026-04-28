import java.util.Scanner;
public class input3 {
    public static void main(String args[])
    {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter your student id:");
            int  id=sc.nextInt();
            System.out.println("Enter your name");
            String name=sc.next();
            System.out.println("enter your salary");
            float salary=sc.nextFloat();
            System.out.println("id:"+id);
             System.out.println("name:"+name);
              System.out.println("salary:"+salary);
        }

    }
    
}
