/* Increment and Decrement operator */
#include <iostream>
using namespace std;
int main()
{
    int num,Pre_increment,Pre_decrement,Post_increment,Post_Decrement;
    cout<<"Enter any number : ";
    cin>>num;
    Pre_increment = ++num;
    Pre_decrement = --num;
    Post_increment = num++;
    Post_Decrement= num--;
    cout<<"Pre-increment is : "<< Pre_increment <<endl;
    cout<<"Post-increment is : "<< Post_increment <<endl;
    cout<<"Pre-decrement is : "<< Pre_decrement <<endl;
    cout<<"Post-Decrement is : "<< Post_Decrement <<endl;
    return 0;
}
