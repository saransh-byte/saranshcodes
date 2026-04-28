#include<stdio.h>
int main(){
    int rev=0;
    int n;
    printf("Enter the  number ");
    scanf("%d",&n);
    while(n>0)
    {
        rev=(rev*10)+(n%10);
        n=n/10;
    }
    if(n==0)
    {
        printf("the reverse numver is %d",rev);
    }
    else{
        printf("the number is invalid");
    }
}