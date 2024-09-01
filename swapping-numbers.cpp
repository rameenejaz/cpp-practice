#include <iostream>
using namespace std;

int main () {
    int number1=0;
    int number2=0;

    cout<<"Enter a number1:";
    cin>>number1;
    cout<<"Enter a number2:";
    cin>>number2;

    number1 = number1+number2;
    number2 = number1 - number2;
    number1 = number1 - number2;

    cout<<"number1 :"<<number1<<'\n';
    cout<<"number2 :" <<number2<<'\n';

}