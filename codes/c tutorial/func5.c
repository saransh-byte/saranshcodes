
//sum_of_N_numbers
#include<stdio.h>
int sumofN(int n)
{
    int sum=0;
    for(int i=1; i<=n; i++)
     sum=sum+i;
    printf("sum of n number is %d",sum);
    return 0;
}
int main()
{
    int num;
    printf("Enter n numbers\n");
    scanf("%d",&num);
    sumofN(num);
    return 0;
}