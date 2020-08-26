/*Write a C++ program for function with No arguments passed but a return value */
#include <iostream> 
using namespace std; 
int sum()
{
    int a=10,b=20;
    return a+b;
}
int main() 
{ 
    int num; 
    num = sum(); 
    cout<<"Sum of two given values = "<< num<<endl; 
    return 0; 
}
