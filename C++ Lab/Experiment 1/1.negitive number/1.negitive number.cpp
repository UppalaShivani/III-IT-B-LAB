/* Program to display a number if it is negative */
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any number : ";
    cin>>num;
    if(num<0){
        cout<<num<<" is negitive "<<endl;
    }
    return 0;
}