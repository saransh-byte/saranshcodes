#include<stdio.h>
int main()
{
    int i,n,pos,a[20];
    printf("Enter the elements\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the position you want to delete\n");
    scanf("%d",&pos);
    for(i=pos-1; i<n-1; i++)
{
    a[i]=a[i+1];
}
n--;

    printf("after the deletion\n");
    for(i=0; i<n; i++)
    {
    printf("%d",a[i]);
    }
    printf("\n");
        return 0;
    
}