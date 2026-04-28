#include<stdio.h>
int rec(int n)
{
    if(n==0)
    return 0;
    printf("%d",n);
    rec(n-2);
    
}
int main()
{
    rec(10);
    return 8;
}