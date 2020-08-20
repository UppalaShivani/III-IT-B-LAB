/* Relational operator */
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two number : ";
    cin>>a>>b;
    if( a == b ) {
      cout << "a is equal to b" << endl ;
    }
    else if(a != b){
        cout << "a is not equal to b" << endl ;
       if( a < b ) {
        cout << "a is less than b" << endl ;
        }
       else if( a > b ) {
        cout << "a is greater than b" << endl ;
        }
    }
    if( a <= b ) {
      cout << "a is either less than or equal to  b" << endl ;
    }
   
    if( a >= b ) {
      cout << "a is either greater than or equal to b" << endl ;
    }
    return 0;
}
