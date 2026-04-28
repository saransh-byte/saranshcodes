#include<stdio.h>
int main()
{
    int a=10;
    int *ptr=&a;
    int **ptr2=&ptr;
    //pointer to pointer variable
    printf(" %d\n",*ptr);
    //storing the address of ptr
    printf("%d\n",ptr2);
    //address of a
    printf("%d\n",&a);
    // address of a which is stored in ptr 
    printf("%d\n",ptr);
    //address of ptr
    printf("%d",&ptr);

    return 0;
}