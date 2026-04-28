#include<stdio.h>
int max(int a, int b ,int c)
{
    if(a>b && a>c)
        printf("a is maximum");
    else if (b>c)
        printf("b is maximum");
            else
            {
                printf("c is maximum");
            }
        }

int main()
{
    int x,y,z;
    printf("enter three numbers:");
    scanf("%d %d %d",&x,&y,&z);
    max(x,y,z);
    return 0;
}