#include<stdio.h>
#include<string.h>
int main()
{
    char rev[50];
    printf("Enter the word to reverse\n");
    gets(rev);
    printf("The revers string is %s:\n",strrev(rev));
    return 0;
}