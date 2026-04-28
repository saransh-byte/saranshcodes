import java.util.Scanner;
class factorial
{
    public static void main(String[] args)
{
    int num,fact=1;
    try (Scanner sc = new Scanner(System.in)) {
        System.out.println("Enter any numner you want to factorial of");
         num=sc.nextInt();
    }
    for(int i=1; i<=num; i++)
    {
        fact=fact*i;
    }
    System.out.println("factorial is :"+fact);
}
}