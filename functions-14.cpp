#include <iostream>
using namespace std;
void swap (int num1, int num2) {
    int temp=num1;
    num1=num2;
    num2=temp;
    cout<<"After swapping, number 1 is: "<<num1<<" and number 2 is: "<<num2<<'\n';

}
int main () {
    int n1;
    int n2;
    cout<<"Enter number 1: ";
    cin>>n1;
    cout<<"enter number 2: ";
    cin>>n2;
    cout<<"Before swapping, number 1 is: "<<n1<<" and number 2 is: "<<n2<<'\n';
    swap(n1,n2);

}