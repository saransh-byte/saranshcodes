#include<iostream>
using namespace std;
inline int swap(int a, int b)
{
    int swap;
    cout<<"before swappin a="<<a <<",b="<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping a="<<a<<",b="<<b<<endl;
}
int main()
{
    int x,y;
    cout<<"Enter two variables";
    cin>>x>>y;
    swap(x,y);
    return 0;
}