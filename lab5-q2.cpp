#include <iostream>
using namespace std;
int main () {
    int num1;
    int num2;
    int sum=0;
    int totalIntegers=0;
    while (num1>0 && num2>0) {
        cout<<"Enter a pair of positive integers: ";
        cin>>num1>>num2;
        if (num1%num2==0) {
            cout<<"Loop is ended"<<'\n';
            totalIntegers+=2;
            break;
        } 
        sum=num1+num2;
        cout<<"Sum is: "<<sum<<'\n';
        totalIntegers+=2;
    }
            cout<<"Total integers entered "<<totalIntegers;
}