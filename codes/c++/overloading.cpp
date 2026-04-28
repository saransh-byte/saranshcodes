#include<iostream>
using namespace std;
class name
{
    public:
 int add(int a,int b){
    return a+b;
 }   
 int add(int a, int b, int c){
    return a+b+c;
 }
};
int main(){
    name s;
    cout<<s.add(30,20)<<endl;
    cout<<s.add(20,30,40)<<endl;
    return 0;
}