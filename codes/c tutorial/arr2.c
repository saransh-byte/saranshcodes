#include<stdio.h>
int main()
{
    int a[20],i,n,key;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter %d lements\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search\n");
    scanf("%d",&key);
    for(i=0; i<n; i++)
    {
 if(a[i]==key)
    {
    printf("element found at index %d\n",i); 
    return 0;
    }
}
printf("not found");
    
return 0;

}