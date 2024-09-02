#include <iostream>
using namespace std;
#include <cmath> 
int main () {
    int quotient;
    int remainder;
    int divisor;
    int divident;

    cout<<"Enter a value for divisor:";
    cin>>divisor;
    cout<<"Enter a value for divident:";
    cin>>divident;

    quotient = divisor/divident;
    remainder = divisor%divident;
    cout<<"quotient="<<quotient<<'\n';
    cout<<"remainder="<<remainder<<'\n';


    
}