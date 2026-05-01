
 class  methodoverloading
{
 int add(int a, int b)
  {
    return a+b;
  }  
  int add(int a,int b,int c)
  {
    return a+b+c;
  }
  int add (int a, int b,int c, int d)
  {
    return a+b+c+d;
  }
  
    public static void main (String[ ] args)
    {
     methodoverloading obj=new methodoverloading();
        System.out.println("the sum of a and b is:"+ obj.add(10,20));
        System.out.println("the sum of a , b and c is:"+ obj.add(10,20,30));
        System.out.println("the sum of a b c and d is:"+ obj.add(10,20,30,40));
    }
  }
