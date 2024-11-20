#include <iostream>
using namespace std;
void swap (int *a, int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;
    
}
int main () {
    int num1;
    int num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    swap(num1,num2);
    cout<<"After swapping first number is: "<<num1<<'\n';
    cout<<"After swapping second number is: "<<num2<<'\n';
    
}