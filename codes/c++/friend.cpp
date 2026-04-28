#include<iostream>
using namespace std;
class number
{
    int x;
    public:
    number(){
        x=100;
    }
    friend void show(number n);
};
void show(number n){
    cout<<"the value of x is:-"<<n.x<<endl;
}
int main()
{
    number obj;
    show(obj);
    return 0;
}