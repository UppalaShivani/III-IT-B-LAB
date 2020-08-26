/* Prime numbers between given interval */
#include <iostream>
using namespace std;
int checkPrimeNumber(int);
int main() 
{
    int n1, n2;
    cout << "Enter two positive integers: ";
    cin >> n1 >> n2;
    if (n1 > n2) {
      n2 = n1 + n2;
      n1 = n2 - n1;
      n2 = n2 - n1;
    }
    cout << "Prime numbers between " << n1 << " and " << n2 << " are: ";
    for(int i = n1+1; i < n2; ++i) {
        if(checkPrimeNumber(i))
            cout << i << ", ";
    }
    return 0;
}
int checkPrimeNumber(int n) {
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

