#include<iostream>
using namespace std;
int sum(int a, int b)
{
    return a+b;
}
int sum(int a ,int b, int c)
{
    return a+b+c;
}
int main()
{
    cout<<"the sum is "<<sum(6,7)<<endl;
    cout<<"the sum is "<<sum(7,8,9)<<endl;
return 0;
}