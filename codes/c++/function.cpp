#include <iostream>
using namespace std;
int sum(int a,int b);
int main()
{
    int x,y;
    cout<<"enter the first number:"<<endl;
    cin>>x;
    cout<<"enter the second number:"<<endl;
    cin>>y;
    int add=x+y;
    cout<<"the addition is:\n"<<add<<endl;
    return 0;
}
int sum(int a, int b)
{
    return a+b;
}
