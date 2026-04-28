#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="saransh";
    char s2[]="riya";
    //copy one string into another
    printf("the copy of the s1 is %s\n",strcpy(s2,s1));
    return 0;
}