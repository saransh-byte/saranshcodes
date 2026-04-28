#include<stdio.h>
int factorial(int n)
{
    int fact;
    if(n==0)
    return 1;
    else 
  
  fact= n*factorial(n-1);
}
int main(){
    int x;
    printf("Enter a number for factorial\n");
    scanf("%d",&x);
    factorial(x);
   printf("the factorial of %d=%d",x,factorial(x));
    return 2;
}