#include<iostream>
using namespace std;
class student
{
    string name;
    int age;
    int id;
    public:
        
        void show();
         student();
};
student::student()
{
    cout<<"Enter the name"<<endl;
    cin>>name;
    cout<<"Enter the id"<<endl;
    cin>>id;
    cout<<"Enter the age"<<endl;
    cin>>age;
}
void student::show()
{
    cout<<"the student details:"<<endl;
    cout<<"the name of the student is:"<<name<<endl;
    cout<<"the id of the student is:"<<id<<endl;
    cout<<"the age of the student is: "<<age<<endl;
}
int main()
{
    student s;
    s.show();
    return 0;
}