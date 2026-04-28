#include<stdio.h>
int prime(int num)
{
    int count=0,i;
    for(i=1; i<=num; i++)
    if(num%i==0)
    {
        count++;
    }
    if(count==2)
    {
        printf("number is prime\n");
    }
    else
    {
        printf("Number is not prime");
        return 0;
    }
}
int main()
{
    int n;
    printf("Enter the number to check\n");
    scanf("%d",&n);
    prime(n);
    return 0;
}