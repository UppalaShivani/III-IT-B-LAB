/*program to convert binary to decimal & vive-verca */
#include <iostream>
#include <cmath>
using namespace std;
int Binary_To_Decimal(long long);
long long Decimal_to_Binary(int a);
int main()
{
    long long n;
    int a,binaryNumber;
    cout << "Enter a binary number: ";
    cin >> n;
    cout << n << " in binary = " << Binary_To_Decimal(n) << " in decimal"<<endl;
    cout << "Enter a decimal number: ";
    cin >> a;
    binaryNumber = Decimal_to_Binary(a);
    cout << a << " in decimal = " << binaryNumber << " in binary" << endl ;
    return 0;
}
int Binary_To_Decimal(long long n)
{
    int decimalNumber = 0, i = 0, rem;
    while (n!=0)
    {
        rem = n%10;
        n /= 10;
        decimalNumber += rem*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
long long Decimal_to_Binary(int n)
{
    long long binaryNumber = 0;
    int rem, i = 1, step = 1;

    while (n!=0)
    {
        rem = n%2;
        cout << "Step " << step++ << ": " << n << "/2, Remainder = " << rem << ", Quotient = " << n/2 << endl;
        n /= 2;
        binaryNumber += rem*i;
        i *= 10;
    }
    return binaryNumber;
}