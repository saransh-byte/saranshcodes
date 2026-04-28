#include<stdio.h>
int hello()
{
    printf("hello world\n");
    return 8;
}
int main()
{
    int value=hello();
    printf("the return value is %d ",value);
    return 0;
}