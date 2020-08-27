/* program to Calculate the factorial of a number using recursion */
#include <iostream>
using namespace std;
int factorial(int n);
int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;
    cout<<factorial(n);
    return 0;
}
int factorial(int n)
{
    int fact;
    if(n == 0)
    {
        fact = 1;
    }
    else{
        fact = n * factorial(n-1);
    }
    return fact;
}
