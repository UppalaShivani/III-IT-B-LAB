/*Program to find the average of n numbers using arrays */
#include<iostream>
using namespace std;
int main()
{
    int a[10], n, sum = 0, i, average;
    cout<<"Enter length of array : ";
    cin>>n;
    cout<<"Enter array values : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    average = sum/n;
    cout<<"average = "<<average;
    return 0;
}
