#include<iostream>
using namespace std;
int main()
{
    int arr[7]={3,6,8,9,5,2,7};
    int sum = 0;
    for(int i=0; i<7; i++)
    {
        sum = sum + arr[i];
    }
    cout<<"the sum of the array elements is:"<<sum <<endl;
    return 0;

}