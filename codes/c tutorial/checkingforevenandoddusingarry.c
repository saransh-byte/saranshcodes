#include<stdio.h> 
int main()
{
    int i,arr[100],n;
    printf("Enter the number you want to add element in the array\n");
    scanf("%d",&n);
    printf("enter the element\n");
    for(i=0; i<n; i++)
    scanf("%d",&arr[i]);
{
printf("checing for even and odd\n");
for(i=0; i<n; i++)

if(arr[i]%2==0)
{
    printf(" %d=even\n",arr[i]);
    
}
else
    printf(" %d=odd\n",arr[i]);

}

    return 0;

}
