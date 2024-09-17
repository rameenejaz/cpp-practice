#include <iostream>
using namespace std;
#include <cmath>
int main() {
    float L=0;
    float dB=0;
    float Pa=0;
    float P0=0;
    char unit;
    int userInput = -1;

    cout<< "Do you want to enter in dB or Pa? (Enter 1 for Decibal. Enter 2 for Pascal): ";
    cin>> userInput;

    cout << "The user input is: " << userInput<<'\n';

    

    if (userInput == '2' ) {
        P0=20*(0.000001) ;
        L = 20 * log10 (Pa/P0);
    }
    else if (userInput == '1') {
        L=Pa;
    }
    cout<<"Enter sound level, L, you are hearing: ";
    cin>>L;

    if (L>=130) {
        cout<<"Threshold of pain"<<'\n';
    }
    else if (L>=120) {
        cout<<"Possible hearing damage"<<'\n';
    }
    else if (L>=100) {
        cout<<"Jack hammer at 1m"<<'\n';
    }
    else if (L>=90) {
        cout<<"Traffic on a busy road"<<'\n';
    }
    else if (L>=60) {
        cout<<"Normal conversation"<<'\n';
    }
    else if (L>=30) {
        cout<<"Calm Library"<<'\n';
    }
    else {
        cout<<"Light leaf rustling"<<'\n';
    }
     return 0;
}
