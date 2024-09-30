#include <iostream>
using namespace std;
int main () {
    int num1=0;
int num2=0;
int num3=0;
cout<<"Enter the value of number 1: ";
cin>>num1;
cout<<"Enter the value of number 2: ";
cin>>num2;
cout<<"Enter the value of number 3: ";
cin>>num3;
if (num1==num2 && num2==num3){
    cout<<"Number of same integers"<<"3"<<'\n';
}
else if (num1==num2 || num2==num3 || num1==num3) {
    cout<<"Number of same integers"<<"2"<<'\n';
}
else {
    cout<<"Number of same integers: "<<"0"<<'\n';
}
}