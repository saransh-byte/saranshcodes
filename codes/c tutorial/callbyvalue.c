#include<stdio.h>
int swap(int a, int b)
{
    int temp;
    printf("before swapping the value a=%d b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping the value a=%d b=%d\n",a,b);
    return 0;
}
int main()
{
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d %d",&x,&y);
    swap(x,y);
    return 0;
}