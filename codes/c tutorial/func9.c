#include<stdio.h>
int main()
{
    int a[10],i,n,large;
    printf("Enter the numbers of elements\n");
    scanf("%d",&n);
    printf("Enter the elements %d\n",n);
    {
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
}
large=a[0];
for(i=1; i<n; i++)
{
    if(a[i]>large)
    {
        large=a[i];
    }
}
printf("Largest element =%d\n",large);
return 0;

}