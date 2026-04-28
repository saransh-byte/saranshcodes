#include<stdio.h>
int main()
{
    int a[20],i,n,start,end;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the %d elements\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    end=n-1;
    start=0;
    while(start<end)
    {
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        end--;
        start++;
    }
    printf("Reversed elements are\n");
    for(i=0; i<n; i++)
    {
    printf("%d",a[i]);
    }
    return 0;
}