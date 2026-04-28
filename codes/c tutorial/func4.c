#include<stdio.h>
int findmax(int a, int b, int c)
{
    if(a>b && a>c)
    {
        printf("a is maximum");
    }
    else if (b>a && b>c)
    {
        printf("b is maximum");
    }
    else{
        printf("c is maximum");
    }
    return 0;
}
    int main()
    {
        int x,y,z;
        printf("enter three numbers");
        scanf("%d %d %d",&x,&y,&z);
        findmax(x,y,z);
       // printf("%d",findmax());
        return 0;

    }
    
