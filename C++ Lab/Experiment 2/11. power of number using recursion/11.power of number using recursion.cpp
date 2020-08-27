/* Program to calculate power of number using recursion */
#include<iostream>
using namespace std;
int power(int m, int n);
int main()
{
    int a,b;
    cout <<"Enter number and power value : ";
    cin>>a>>b;
    cout<<a<<'^'<<b<<" = "<<power(a,b);
    return 0;
}
int power(int m , int n)
{
    if(n == 0)
    {
        return 1;
    }
    else{
        return m*power(m,n-1);
    }
}