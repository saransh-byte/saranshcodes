#include<stdio.h>
int main()
{
    char behaviour;
    printf ("tell me how you behave:\n");
    scanf("%c",&behaviour);
    switch ( behaviour)
    {
    case 'p':
    printf("you are gay");
    break;
    case 'r':
    printf("you are lesbian");
    break;
    default:
    printf("you are human");
}
return 0;
}
    