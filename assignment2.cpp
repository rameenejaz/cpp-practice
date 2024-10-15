#include <iostream>
using namespace std;
int main () {
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    while ((!cin>>number)) {
        cin.clear();
        cin.ignore ();
        cout<<"Input is invalid, enter the value again: ";
    }
    if (number>0) {
        cout<<"The entered number is positive";
    }
    else if (number<0) {
        cout<<"The entered number is negative";
    }
    else if (number==0) {
        cout<<"The entered number is zero";
    }
}