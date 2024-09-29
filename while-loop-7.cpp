//printing numbers 1 to 10, but if user enters negative number or greater than 10 then take prompt from user again.
#include <iostream>
using namespace std;
int main () {
    int input;
    cout<<"Enter a number between 1 and 10: ";
    cin>>input;
    while (input<1 || input>10) {    //ivalid inputs
        cout<<"Invalid, try again"<<'\n';
        cout<<"Enter a number between 1 and 10: ";
    cin>>input;
    }
    while (input>1 && input<=10) {
         cout<<"Input is: "<<input<<'\n';
        input++;
    }

}