#include<stdio.h>
int main()
{
    int a[20][20],i,j,row,col,key;
    printf("Enter the number of rows\n");
    scanf("%d",&row);
    printf("Enter the number of col\n");
    scanf("%d",&col);
    printf("Enter the %d elements\n",row*col);
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("enter the element to search\n");
scanf("%d",&key);
for(i=0; i<row; i++)
{
    for(j=0; j<col; j++)
{
if(a[i][j]==key)
{
    printf("the element %d found at index row %d\n, col %d\n",key,i,j);   
    return 0;
}
}
printf("not found\n");
return 0;
}
}
