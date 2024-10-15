#include <iostream>
using namespace std;
int main () {
    int number;
    int divisor;
    cout<<"Enter a number to find its divisor: ";
    while (true) {
        cin>>number;
        if (number>0){
            break;
        }
        else if (number<=0) {
            cout<<"Input is invalid, enter a positive value again: ";
        }
    }
    for (int i=number; i>=1; --i) {
       if (number%i==0)
        cout<<"Divisor = "<<i<<'\n';
    }
}