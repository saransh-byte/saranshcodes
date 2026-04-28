#include<stdio.h>
int main()
{
    char intro[200],i=0;
    printf("Enter your introduction\n");
    gets(intro);
    for(i=0; intro[i]!='\0';i++){
    
       printf("%c\n",intro[i]);
    }
    return 0;
    }
