#include<iostream>
using namespace std;
int main()
{
    int arr[100],n,i;
    cout<<"Enter how many elements you want to enter"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(i=0; i<n; i++)
    cin>>arr[i];
{
cout<<"The elements are:"<<endl;
for(i=0; i<n; i++)
{
cout<<arr[i]<<endl;
}
}
cout<<endl;
return 0;
}
