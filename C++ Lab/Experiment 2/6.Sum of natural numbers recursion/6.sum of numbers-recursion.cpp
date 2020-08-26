/* sum of natural numbers using recursion */
#include <iostream>
using namespace std;
int addNumbers(int n);
int main() 
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Sum = "<< addNumbers(num)<<endl;
    return 0;
}
int addNumbers(int n) 
{
    if (n != 0)
        return n + addNumbers(n - 1);
    return n;
}
