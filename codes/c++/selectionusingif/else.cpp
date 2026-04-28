#include<stdio.h>
int main()
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age==18)
    {
        printf("you can vote in coming year:");
    }
    else if(age<18)
    {
        printf("you can not vote");
    }
    else{
        printf("you can vote");
    }
    return 0;
}