#include <iostream>
using namespace std;

int main () {
    int number;
    bool isPrime = true;

    cout<< "enter a number n"<<'\n';
    cin>>number;

    for (int i = 2; i<number; i++) {
        if (number%i==0) {
            isPrime=false;
            break;
        }
    }

    if (isPrime==false) {
       cout<<"not prime" <<'\n';
    } else {
        
    cout<<"prime" <<'\n';
    }


    return 0;
    }
