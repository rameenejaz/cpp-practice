#include <iostream>
using namespace std;
int main () {
    int number;  //a variable used to store the user's input
    cout<<"Enter a number: ";  //prompt the user to input a value 
    cin>>number;

     //this is an input validation check
    if (!(cin)) {      //checks if the entered value is true or not
        cin.clear();   //discard the previous invalid input
        cin.ignore();
        cout<<"INVALID INPUT!";  
        cout<<"Enter a number again: ";  //taking input from user again
        cin>>number;  
    }
    if (number>0) {
        cout<<"It is a POSITIVE integer"<<'\n';
    }
    else if (number<0) {
        cout<<"It is a NEGATIVE integer"<<'\n';
    }
    else if (number==0) {
        cout<<"The integer is ZERO"<<'\n';
    }
    

}