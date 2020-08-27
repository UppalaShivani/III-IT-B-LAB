/* Program to calculate the sum of array elements by passing to a function */
#include<iostream>
using namespace std;
int add_array_elements(int a[], int n);
int main()
{
    int a[10], n, i,sum;
    cout<<"Enter length of array : ";
    cin>>n;
    cout<<"Enter array elements : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sum = add_array_elements(a,n);
    cout<<"Sum of array elements is : "<<sum<<endl;
    return 0;
}
int add_array_elements(int a[], int n)
{
    int i, sum = 0;
    for(i=0;i<n;i++)
    {
        sum = sum+a[i];
    }
    return sum;
}