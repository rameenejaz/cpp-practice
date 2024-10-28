#include <iostream>
using namespace std;
int main () {
    int number=0;
    do {
        cout<<"Enter a positive number: ";
        cin>>number;
        if (number<0) {
            cout<<"Invalid!";
        }
        } while (number<0);
    cout<<"You entered the correct input";
}