#include<stdio.h>
#include<string.h>
int main()
{
    //strcat() joins two strings
    char s1[]="saransh ";
    char s2[]="weds ";
    char s3[]=" riya";
    strcat(s1,s2);
    strcat(s1,s3);
    printf("after joining words together %s\n",s1);
    return 0;
}