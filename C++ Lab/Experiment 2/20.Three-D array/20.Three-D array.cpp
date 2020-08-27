/* Program to store and print 12 values entered by the user Three-dimensional array */
#include<iostream>
using namespace std;
int main()
{
    int a[2][3][2], i, j, k;
    cout<<"Enter elements of an matrix : ";
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                cin>>a[i][j][k];
            }
        }
    }
    cout<<"Given elements of matrix : "<<endl;
    cout<<"{"<<endl;
    for(i=0;i<2;i++)
    {
        cout<<"{";
        for(j=0;j<3;j++)
        {cout<<"[";
            for(k=0;k<2;k++)
            {
                cout<<a[i][j][k]<<" ";
                
            }
            cout<<"]";
        }
        cout<<"}"<<endl;
    }cout<<"}";
    return 0;
}
