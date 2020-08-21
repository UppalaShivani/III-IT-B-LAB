/* Program to calculate the sum and average of positive numbers,If the user enters a negative number, the sum and average are displayed(using goto) */
#include <iostream>
using namespace std;
int main() {

   int maxInput = 100,i=0;
   float number, average, sum = 0.0;

   while(1){
      cout<<"Enter a number: ";
      cin>>number;
      i++;
      if (number < 0.0) {
         goto jump;
      }
      sum += number;
   }
jump:
   average = sum / (i - 1);
   cout<<"Sum = "<< sum<<endl;
   cout<<"Average = "<<average<<endl;
   return 0;
}