
import java.util.Scanner;

class sumofNnumbers {
    public static void main(String[] args)
    {
        Scanner sc=new Scanner (System.in);
        int n=sc.nextInt();
        int i=1;
    
        int sum=0;

        for(i=1; i<=n; i++)
        {
            sum+=i;
    }
            
             
    
        System.out.println("the sum of" +n +"number is" +sum);
    }
}
    
    

