#include<stdio.h>
struct student
{
    int id;
    float salary;
};
int main()
{
    
  struct student saransh;
  saransh.id=54;
    printf("saransh id is %d\n",saransh.id);
    return 0;
}