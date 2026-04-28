#include<iostream>
using namespace std;
union meal
{
int rice;
};
int main()
{
    enum meal{daal,chawal,sabji};
    meal saransh=daal;
    cout<<chawal;
    return 0;

}