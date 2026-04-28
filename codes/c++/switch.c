#include<stdio.h>
int main()
{
int ch;
printf("Enter the number between 1-7\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("today is sunday\n");
break;
case 2:
printf("Today is monday\n");
break;
case 3:
printf("Today is tuesday\n");
break;
case 4:
printf("Today is wednesday\n");
break;
case 5:
printf("Today is thursday\n");
break;
case 6:
printf("Today is friday\n");
break;
case 7:
printf("Today is saturday\n");
break;
default:
printf("invlaid\n");
break;
}
return 0;
}