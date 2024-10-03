#include <iostream>
using namespace std; 
int main () {
    bool isPrime=true;
    int i;
    int number;

    cout<<"Enter a number to check if it is prime or not: ";
    cin>>number;

    for (i=2 ; i<number ; i++) {
        if (number%i==0) {
           isPrime=false;
           break;
        }
    }
    if (isPrime==true) {
        cout<<"The number is prime"<<'\n';
    }
    else if (isPrime==false) {
    cout<<"The number is not prime"<<'\n';

    }
}