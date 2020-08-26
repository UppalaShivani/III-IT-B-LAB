/* Program to Check prime and Armstrong number by making functions */
#include<iostream>
#include<cmath>
using namespace std;
int checkPrimeNumber(int n) 
{
    bool isPrime = true;
    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for(int i = 2; i <= n/2; ++i) {
            if (n%i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}
int checkArmstrongNumber(int num)
{
    int originalNum, rem, n = 0, flag;
    int result = 0;
    for (originalNum = num; originalNum != 0; ++n) {
       originalNum /= 10;
    }
    for (originalNum = num; originalNum != 0; originalNum /= 10) {
       rem = originalNum % 10;
       result += pow(rem,n);
    }
    if (result == num)
       flag = 1;
    else
       flag = 0;
    return flag;
}
int main()
{
    int i;
    cout<<"Enter any number : ";
    cin>>i;
    if(checkPrimeNumber(i) & checkArmstrongNumber(i))
    {
        cout << i << " is prime and Armstrong number. ";
    }    
    else if(checkArmstrongNumber(i))
    {
        cout<<i<<" is Armstrong number";
    }
    else if(checkPrimeNumber(i))
    {
        cout<<i<<" is prime number";
    }
    else
    {
        cout<<i<<" is neither prime nor Armstrong";
    }
     return 0;
}

