#include <iostream>
using namespace std;
int main () {
    int number; //a variable used to store the user's input
    cout<<"Enter a number to find its divisor: "; //prompt the user to input a value 

    //this is an input validation loop
    while (true) {
        cin>>number;
        if (number>0){
            break;
        }
        else if (number<=0) {
            cout<<"Input is invalid, enter a positive value again: "; //taking input from user again
        }
    }
    for (int i=number; i>=1; i--) {  //declares a variable i, checks if i is a positive number, decrement to print in decreasing order
       if (number%i==0)
        cout<<"Divisor = "<<i<<'\n'; //prints all the possible divisors
    }
}