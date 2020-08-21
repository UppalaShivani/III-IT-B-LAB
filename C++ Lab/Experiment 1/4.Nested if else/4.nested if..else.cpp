/* nested if...else */
#include<iostream>
using namespace std;
int main()
{
   int i;
   cout<<"enter any number : ";
   cin>>i;
    if (i >0) 
    { 
        if (i < 15) 
           cout<<"number is smaller than 15\n"; 
            if (i < 10) 
                cout<<"number is smaller than 10\n"; 
            else
                cout<<"number is greater than 15"; 
    }
    else if(i==0){
        cout<<"number is zero"<<endl;
    }
    else{
        cout<<"number is negitive"<<endl;
    }
    return 0; 
}
