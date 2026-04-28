
import java.util.Scanner;

class input{
    int r,area;
    void Input()
    {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the radius for circle");
    int r=sc.nextInt();
    }
}
class calculate extends input
{
    double area;
    int r;
    void cal()
    {
double area=3.14*(r*r);
    }
}
class display extends input
{
    void dis(){
        System.out.println("the area of circle is "+area);
    }
}
public class heirarical {
    public static void main(String[] args)
    {
        display obj=new display();
        obj.Input();

        obj.dis();
    }
    
}
