#include<stdio.h>
int main()
{
    int arr[20],i,n,small,INT_MAX;
    printf("Enter the number for elements\n");
    scanf("%d",&n);
    printf("Enter the elements %d\n",n);
    {
    for(i=0; i<n; i++)
    scanf("%d",&arr[i]);
}
small=arr[0];
for(i=1; i<n; i++)
{
    if(arr[i]>small)
    {
        small=arr[0];
    }
}
printf("smallest element=%d\n",small);
return 0;
}