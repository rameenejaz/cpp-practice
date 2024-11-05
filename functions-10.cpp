#include <iostream>
using namespace std;
int add (int num1, int num2) {
    int result=num1+num2;
    return result;
}
float add (float num1, float num2) {
    float result=num1+num2;
    return result;
}
int main () {
    float num1;
    float num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<add(num1,num2);
}