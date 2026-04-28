#include<iostream>
using namespace std;
class student
{
    int salary=0,age;
    string name;
    public:
    //void show();
    student(){
        cout<<"enter your name:-"<<endl;
        cin>>name;
        cout<<"Enter your age:-"<<endl;
        cin>>age;
        cout<<"Enter your salary:-"<<salary<<endl;
        cin>>salary;
    }
    ~student()
    {
        cout<<"----deconstrucor is release-----"<<endl;
    }
    void show()
    {
        cout<<"my name is:- "<<name<<endl;
        cout<<"my salary is:- "<<salary<<endl;
        cout<<"my age is:- "<<age<<endl;
    
    }
};
int main()
{
    student s1;
    s1.show();
    return 0;
}