#include <iostream>
using namespace std;
int main () {
    int number=0;
    int reversedNumber=0;
    cout<<"Enter an number to reverse";
    cin>>number;

    while (number!=0) {
        int digit = number%10;
        reversedNumber=(reversedNumber*10) + digit;
        number= number/10;
    }
    cout<<"The reversed number is:"<<reversedNumber<<'\n';
}