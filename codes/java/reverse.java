import java.util.Scanner;
class reverse
{
    public static void main(String[] args)
    {

    
    Scanner sc=new Scanner (System.in);
    System.out.println("Enter the number you want to reverse of");
    int n=sc.nextInt();
int rev=0;
while(n>0)
{
rev=(rev*10)+(n%10);
n=n/10;
}
if(n==0)
{
    System.out.println("the reverse number is "+" "+rev);

}
else
{
    System.out.println("the number is invalid");
}
}
}