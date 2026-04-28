#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    int ch,i;
    int len=0;
    printf("Enter the how many string you want to  store\n");
   scanf("%d",&ch);
       for(i=0; i<ch; i++)
    printf("Enter the %d string\n",ch);
    scanf("%s",str);
   
    {
        printf("You entered the string %s\n",str);
        printf("The length of the string is:=%d\n",strlen(str));

    }
    return 0;
    
}