#include<stdio.h>
int factn(int n)
{
 int i,fact=1;
 for(i=1; i<=n; i++)
 fact*=i;
 printf("the factoral is %d ",fact);
 return 0;   
}
int main()
{
    int num;
    printf("Enter the n number\n");
    scanf("%d",&num);
    factn(num);
    return 0;
}