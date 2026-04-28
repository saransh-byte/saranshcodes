#include<stdio.h>
int main()
{
    int a[20][20],b[20][20],c[20][20];
    int row1,row2,col1,col2,i,j,k;
    printf("Enter the number of row for the 1st matrix:\n");
    scanf("%d",&row1);
    printf("Enter the column for the 1st matrix:\n");
    scanf("%d",&col1);
    printf("Enter the row and coloumn for the second matrix:\n");
    scanf("%d %d",&row2,&col2);
    {
    printf("Enter the element for the matrix 1:\n");
        for(i=0; i<row1; i++)
        
            for(j=0; j<col1; j++)
        
            scanf("%d",&a[i][j]);
    
    printf("Enter the element for the 2nd matrix:\n");
        for(i=0; i<row2; i++)
        
            for(j=0; j<col2; j++)
            scanf("%d",&b[i][j]);
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col2; j++)
        {
                    c[i][j]=0;
                for(k=0; k<col1; k++)
                c[i][j]+=a[i][k]*b[k][j];
            }
            }
    printf("the multiplication of the matrix:\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col2;j++)
        {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
                
        }
            return 0;
           
    }
    
}

    
    
