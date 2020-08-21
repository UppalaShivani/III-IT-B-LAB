/* logical operators */
#include<iostream>
using namespace std;
int main()
{
    bool a,b;
    cout<<"enter any two bool values : ";
    cin>>a>>b;
    cout<<"a && b : "<<(a&&b)<<endl;
    cout<<"a|| b : "<<(a||b)<<endl;
    cout<<"!(a || b) : "<< !(a||b)<<endl;
}