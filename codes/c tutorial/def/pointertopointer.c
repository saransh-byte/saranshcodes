#include<stdio.h>
int main()
{
    int a=9;
    int *b=&a;
    b=&a;
    int **c=&b;
    printf("%d\n",b);
    printf("the adrress of b at b is %d",**c);
    return 0;
}