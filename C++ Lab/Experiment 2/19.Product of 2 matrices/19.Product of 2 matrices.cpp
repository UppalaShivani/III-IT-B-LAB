/* program to find the product of two matrices */
#include<iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10], c[10][10], m, n, i, j, k;
    cout<<"enter number of rows and column of array : ";
    cin>>m>>n;
    cout<<"Enter elements of matrix-1 : ";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements of matrix-2 : ";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j] = 0;
            for(k=0;k<n;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];  
            }
        }
    }
    cout<<"Product of given matrix is : \n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<c[i][j]<<" ";
        }
    }
    return 0;
}
