/* Program for Passing two-dimensional arrays */
#include<iostream>
using namespace std;
void passing_Arr(int arr[2][2]);
int main() {
   int arr[2][2], i, j, m, n;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
   passing_Arr(arr);
   return 0;
}
void passing_Arr(int a[2][2]) {
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout << "element at index "<<i<<j<<" is " << a[i][j]<<endl;
        }
    }
}
