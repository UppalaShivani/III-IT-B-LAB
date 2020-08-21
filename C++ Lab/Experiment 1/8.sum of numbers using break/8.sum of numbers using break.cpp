/*  Program to calculate the sum of a maximum of 10 numbers,If a negative number is entered, the loop terminates (Using Break)*/
#include<iostream>
using namespace std;
 int main()
 {
     int number, i, sum=0;
     for(i=0;i<10;i++)
     {
         cout<<"Enter number: ";
         cin>>number;
         if( number<0 ){
             break;
         }
         sum = sum+number;
     }
     cout<<"Sum = "<<sum<<endl;
     return 0;
 }