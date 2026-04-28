#include<stdio.h>
int main()
{
    int arr[20][20],i,j,row,cols;
    printf("Enter the row :\n");
    scanf("%d",&row);
    printf("Enter the coloumn:\n");
    scanf("%d",&cols);
    printf("Enter the element :\n");
{
    for(i=0; i<row; i++)
    {
        for(j=0; j<cols; j++)
    scanf("%d",&arr[i][j]);
}
}
printf("your matrix is:\n");
{
    for(i=0; i<row; i++)
    {
        for(j=0; j<cols; j++)
    {
        printf("%d\t",arr[i][j]);
}
    printf("\n");
}
}
return 0;
}