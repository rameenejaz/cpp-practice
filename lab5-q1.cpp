#include <iostream>
using namespace std;
int main () {
    int inputValue;
    int result;
    int steps=0;
    cout<<"Enter the initial value: ";
    cin>>inputValue;
    while (inputValue<1) {
        cin.clear();
        cin.ignore();
        cout<<"Error, enter a positive number: ";
        cin>>inputValue;
    }
    while (inputValue>1) {
        if (inputValue%2==0 ) {
            inputValue/=2;
            cout<<"Next value is: "<<inputValue<<'\n';
            steps++;        
            }
        else if (inputValue%2==1 ) {
            inputValue=(inputValue*3)+1;
             cout<<"Next value is: "<<inputValue<<'\n';
            steps++;
        }
        if (inputValue==1){
                break;
        }
        
        }
        cout<<"The final value is: 1, the number of steps are: "<<steps;
}

        