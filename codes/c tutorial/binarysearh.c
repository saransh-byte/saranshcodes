#include<stdio.h>
int main()
{
    int key,a[20],i,n,mid,start, end;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter the key \n");
    scanf("%d",&key);
    start=0;
    end=n-1;
   // while(start <= end) {
        mid = (start + end) / 2;
    if(a[mid]==key)
    {
        printf("we found our element at mid %d\n",key);
        return 1;
    }
     else if(key>a[mid])
    {
start=mid+1;
    }
    else 
    {
         mid-1;

}
printf("we are not able to find your element\n");
    
    return 0;
}