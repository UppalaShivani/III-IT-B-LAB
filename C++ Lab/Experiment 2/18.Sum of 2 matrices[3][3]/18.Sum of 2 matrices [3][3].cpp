/* program to find the sum of two matrices of order 3*3 */
#include<iostream>
using namespace std;
int main()
{
    int a[3][3], b[3][3], c[3][3], i, j;
    cout<<"Enter elements of matrix-1 : ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements of matrix-2 : ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    cout<<"Sum of given matrices : ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<c[i][j]<<" ";
        }
    }
    return 0;
}