#include<stdio.h>
int main()
{
    int a[20][20],b[20][20],c[20][20],row,cols,i,j;
    printf("Enter the row :\n");
    scanf("%d",&row);
    printf("Enter the coloumn:\n");
    scanf("%d",&cols);
printf("Enter the elment for matrix 1:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<cols; j++)
    {
    scanf("%d",&a[i][j]);
}
    }

printf("Entre the elements for 2nd matrix:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<cols; j++)
    {
    scanf("%d",&b[i][j]);
    }
}
printf("the sum of the matrix:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<cols; j++)
    {
c[i][j]=a[i][j]+b[i][j];
    printf("%d\t",c[i][j]);
}
printf("\n");
}
    return 0;
}
