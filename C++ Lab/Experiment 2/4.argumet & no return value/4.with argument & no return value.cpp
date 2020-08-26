/* Write a C++ program for function with  arguments passed and no return value */
#include<iostream>
using namespace std;
void add(int x, int y)
{
     int result;
     result = x+y;
     cout<<"Sum of "<<x<<" and "<<y<<" is "<<result<<endl;
}
int main()
{
     add(30,15);
     add(63,49);
     add(952,321 );
}
