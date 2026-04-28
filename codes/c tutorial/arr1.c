#include<stdio.h>
int main()
{
    int i,n,large,index,a[20];
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    large=a[0];
    index=0;
    
for(i=1; i<n; i++)
{
    if(a[i]>large)
{

    large=a[i];
    index=i;

}
}
printf("Largest element %d at index %d",large,index);
return 0;
}