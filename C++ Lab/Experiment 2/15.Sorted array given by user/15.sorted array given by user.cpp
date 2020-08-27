/*  Program to take 5 values from the user and store them in an array and Print the elements stored in the array */
#include<iostream>
using namespace std;
int main()
{
    int a[5], i, j, temp;
    cout<<"Enter any 5 values : ";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(j=0;j<5;j++)
    {
        for(i=0;i<5;i++)
        {
            if(a[i]>a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}