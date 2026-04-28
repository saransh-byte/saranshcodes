#include<stdio.h>
int main()
{
    int a[20],num,size,pos,i;
    printf("Enter the number of elements\n");
    scanf("%d",&size);
    printf("Enter the %d elemenst\n",size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want to inster\n");
    scanf("%d",&num);
    printf("Enter the position\n");
    scanf("%d",&pos);
    for(i=size; i>=pos-1; i--)
    {
        a[i+1]=a[i];
    }
    //inserting element
    a[pos-1]=num;
    size++;
    printf("after the insertion  elements are\n");
    for(i=0; i<size; i++)
        printf("%d",a[i]);
{
        return 0;
    }

}