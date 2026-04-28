#include<stdio.h>
int main()
{
    int arr[20][20],i,j,row,col;
    printf("Enter the number for row elements \n");
    scanf("%d",&row);
    printf("Enter the number for coloumn elements\n");
    scanf("%d",&col);
printf("Enter %d  elements\n",row*col);
    for(i=0; i<row; i++)
    {
    for(j=0; j<col; j++)
    {
    scanf("%d",&arr[i][j]);
    }
}
    printf("your matrix is \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
    {
printf("%d\t",arr[i][j]);
    }
    printf("\n");
}
    return 0;
}