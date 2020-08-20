/* Program to relate two integers using =, > or < symbol */
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter any two number : ";
    cin>>a>>b;
    if( a == b ) {
      cout <<a<< " is equal to "<<b<< endl ;
    }
    else{
       if( a < b ) {
        cout <<a<<" is less than "<<b<< endl ;
        }
       else if( a > b ) {
        cout <<a<<" is greater than "<<b << endl ;
        }
    }
    return 0;
}