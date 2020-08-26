/* Addition of 2 numbers using function*/
#include <iostream>
using namespace std;
int add(int a, int b);
int main()
{
    int a,b;
    cout<<"Enter any 2 numbers : ";
    cin>>a>>b;
    cout<<add(a,b);
    return 0;
}
int add(int a, int b)
{
    return (a+b);
}

