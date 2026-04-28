import java.util.Scanner;
class inputclass{
    
 int a;
    int b;
    int c;
    
    void input()
    {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("ENter a number for A");
                a=sc.nextInt();
                System.out.println("ENter a number for B");
                 b=sc.nextInt();
                 System.out.println("ENter a number for C");
                  c=sc.nextInt();
        }
    }
}
class calculate extends inputclass
{
   int sum; 

    void cal()
    {
  sum=a+b+c;
}
}
class display extends calculate{
    void dis()
    {
        System.out.println("The sum of three number is" +" " +sum);
    }
}
public class multilevelinhertence {
    public static void main(String[] args)
    {
display obj=new display();
{
    obj.input();
    obj.cal();
    obj.dis();
}
    }

    
}
