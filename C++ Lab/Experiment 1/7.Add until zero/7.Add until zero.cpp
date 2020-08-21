/*Add until zero */
#include<iostream>
using namespace std;
int main()
{
    int i,sum=0;
    cout<<"enter number to add : ";
    cin>>i;
    while(i != 0)
    {
        cout<<"enter number to add : ";
        cin>>i;
        sum = sum+i;
    }
    cout<<"sum = "<<sum;
    return 0;
}
