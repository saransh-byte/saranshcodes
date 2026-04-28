#include<iostream>
using namespace std;
struct student
{
    int id;
    int rollno;
    //char course;   
};
int main()
{
    struct student saransh;
    saransh.id=97240197;
    saransh.rollno=54;
    //saransh.course="bca";
    cout<<"saransh's id is: "<<saransh.id<<endl;
    cout<<"saransh's roll no is:"<<saransh.rollno<<endl;
    return 0;
}