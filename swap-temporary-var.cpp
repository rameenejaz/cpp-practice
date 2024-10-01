//swapping two numbers by using a temporary variable
#include <iostream>
using namespace std;
int main () {
    int number1;
    int number2;
    int temporary;
    cout<<"Enter the value of the 1st number: ";
        cin>>number1;
    cout<<"Enter the value of the 2nd number: ";
        cin>>number2;
    
    temporary=number1;
    number1=number2;
    number2=temporary;
    
    cout<<"number1 :"<<number1<<'\n';
    cout<<"number2 :" <<number2<<'\n';
}