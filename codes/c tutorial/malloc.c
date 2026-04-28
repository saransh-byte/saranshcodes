#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc (sizeof(int));
    *ptr=10;
    printf("value stored in allocated memory %d\n",*ptr);
    return 0;
}