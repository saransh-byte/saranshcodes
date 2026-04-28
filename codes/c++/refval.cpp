#include<iostream>
using namespace std;
void callvalue(int a, int b)
{
    a=a+20;
    b=b+10;
    cout<<"inside call by value a="<<a <<"b="<<b<<endl;
}
void refvalue(int* a, int* b)
{
    *a=*a+10;
    *b=*b+20;
    cout<<"inside call by refrence value a="<<*a<<"b="<<*b<<endl;
}
int main()
{
    int x=5;
    int y=10;
    cout<<"before call by value x="<<x<<"y="<<y<<endl;
    callvalue(x,y);     
    cout<<"after call by value x="<<x<<"y="<<y<<endl;
    cout<<"before call by reference x="<<x<<"y="<<y<<endl;
    refvalue(&x,&y);
    cout<<"after call by reference x="<<x<<"y="<<y<<endl;
    return 0;
}