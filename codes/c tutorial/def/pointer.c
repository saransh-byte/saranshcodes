#include<stdio.h>
int main()
{
    int a=9;
    int *b=&a;
    printf("%d\n",b);
    printf("%d",*b);
    return 0;
}