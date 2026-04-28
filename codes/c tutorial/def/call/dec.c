#include<stdio.h>

int sum(int a , int b) //function declaration
{
int add;
add=a+b;  //function definition
printf("%d",add);
}
int main()
{
    int x=7;
   int y=8;
    sum(x,y);    //fucntion calling
    return 0;
}