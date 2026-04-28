#include<stdio.h>
int main()
{
    char ch;
    printf("The ascii values of uppercase is \n");
    for(ch='A',ch<='Z'; ch++;){
        printf ("%c=%d\n",ch,ch);
    }
    
    printf("The ascii values of the lower case alphabet\n");
    for(ch='a',ch<='z'; ch++;)
    {
        printf("%c=%d\n",ch,ch);
    }
    return 0;
}