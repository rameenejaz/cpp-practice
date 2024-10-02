#include <iostream>
using namespace std;
int main () {
    int number;
    int factorial=1;
    int i=1;
    cout<<"Enter the number to find its factorial: ";
    cin>>number;

    while (i<=number) {
        factorial = i*factorial;
        i++;
    }
    cout<<"Factorial= "<<factorial<<'\n';
}