/* Write a C++ program for function with Argument passed and a return value */
#include <iostream>
using namespace std;
int max(int num1, int num2);
int main () 
{
   int a = 100;
   int b = 200;
   cout << "Max value is : " << max(a,b) << endl;
   return 0;
}
int max(int num1, int num2) 
{
   int result;
   if (num1 > num2)
      result = num1;
   else
      result = num2;
   return result; 
}
