#include<iostream>
using namespace std;
class saransh
{
    int a,b;
    public:
    void input();
    void sum();
};
void saransh::input()
{
    cout<<"enter two number";
    cin>>a>>b;
}
void saransh::sum()
{
    cout<<a+b;
}
int main()
{
    saransh obj;
    obj.input();
    obj.sum();
    return 0;
}