/* Assignment operator */
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter any number : ";
    cin>>a;
    b=a;
    cout<<"Assignment operator = :"<<b<<endl;
    b += a;
    cout<<"Assignment operator += : "<<b<<endl;
    b -= a;
    cout<<"Assignment operator -= : "<<b<<endl;
    b *= a;
    cout<<"Assignment operator *= : "<<b<<endl;
    b /= a;
    cout<<"Assignment operator /= : "<<b<<endl;
    return 0;
}
