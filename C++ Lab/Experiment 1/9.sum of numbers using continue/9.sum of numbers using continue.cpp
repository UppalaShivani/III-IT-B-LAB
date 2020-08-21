/*  Program to calculate the sum of a maximum of 10 numbers,Negative numbers are skipped from the calculation (Using Continue)*/
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
             continue;
         }
         sum = sum+number;
     }
     cout<<"Sum = "<<sum<<endl;
     return 0;
 }