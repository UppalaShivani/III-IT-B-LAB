/* program to store temperature of two cities of a week and display it */
#include<iostream>
using namespace std;
int main()
{
    int a[7], b[7], i;
    cout<<"Enter temperatures of city-1 of a week : ";
    for(i=0;i<7;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter temperatures of city-2 of a week : ";
    for(i=0;i<7;i++)
    {
        cin>>b[i];
    }
    cout<<"temperatures of city-1 : ";
    for(i = 0;i<7;i++)
    {
        cout<<"Day-"<<i+1<<" is : "<<a[i]<<endl;
    }
    cout<<"temperatures of city-2 : "<<endl;
    for(i=0;i<7;i++)
    {
        cout<<"Day-"<<i+1<<" is : "<<b[i]<<endl;
    }
    return 0;
}