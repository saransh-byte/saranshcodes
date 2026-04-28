#include<stdio.h>
int refswap(int *a, int *b)
{
    int temp;
    printf("before swapping the value the values are a=%d b=%d",*a,*b);
    temp=*a;
    *a=*b;
    *b=temp;
    printf("after swapping the value a=%d b=%d", *a,*b);
    return 0;
}
int main()
{
    int x,y;
    printf("enter two numbers:\n");
    scanf("%d %d",&x,&y);
    refswap(&x,&y);
    return 0;
}