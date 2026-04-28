#include<stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char rev[40],temp;
    printf("Enter the sentence the you want to reverse of\n");
    gets(rev);
    l=strlen(rev);
    for(i=0; i<l/2; i++)
    {
        temp=rev[i];
        rev[i]=rev[l-1-i];
        rev[l-1-i]=rev[i];
    
    printf("%s",rev);
    }
    return 0;
}