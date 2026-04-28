#include<stdio.h>
int main()
{
int arr[10],flag=0,i,key,pos;
printf("Enter the elements\n");
for(i=0; i<10; i++)
scanf("%d",&arr[i]);
printf("enter the element you want to search\n");
scanf("%d",&key);
flag=0;
for(i=0; i<10; i++)
{
if(arr[i]==key)
{
flag=1;
pos=i+1;
break;
}
}
if(flag==0)
{
printf("element is not found");
}
else
{
printf("Element %dfound at position %d",key,pos);
}
return 0;
}

