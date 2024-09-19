#include <iostream>
using namespace std;
bool isEven (int number) {
    return number%2==0;
}

int main () {
    int number;
    cout<<"Enter a number:";
    cin>>number;

    if (isEven(number)) {
        cout<<number<<" is Even"<<'\n';

    }
    else {
        cout<<number<<" is odd";
    }
}