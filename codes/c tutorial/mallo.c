#include<stdio.h>
#include<stdlib.h>
int main()
{
    //step 1
    int *ptr;
    int n,i;
    //step2
    ptr=(int*) malloc(5*sizeof(int));
    //step3
    printf("Enter elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0; i<n; i++)
    scanf("%d",&ptr[i]);
    //step4
printf("You entered the elements\n");
for(i=0; i<n; i++)
    printf("%d\n",ptr[i]);
    {
        //step5
        free(ptr);
    }
    return 0;
}