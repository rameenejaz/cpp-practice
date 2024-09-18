#include <iostream>
using namespace std;
float add (float num1,float num2) {
    float sum=num1+num2;
    return sum;
}
float subtract (float num1,float num2) {
    float subtraction = num1 - num2;
    return subtraction;
}
float multiply (float num1,float num2) {
    float product = num1*num2;
    return product;
}
float divide (float num1, float num2) {
    float quotient = num1/num2;
    return quotient;
}
int main () {
    float num1;
    float num2;
    int mathFunction;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter the math operation (Enter 1 for addition, 2 for subtraction, 3 for multiplication and 4 for quotient): ";
    cin>>mathFunction;

    switch (mathFunction) {
        case 1:
        cout<<"Your sum is: "<<add(num1,num2);
        break;

        case 2:
        cout<<"Your subtracted answer is: "<<subtract(num1,num2);
        break;

        case 3:
        cout<<"Your product is: "<<multiply(num1,num2);
        break;

        case 4:
        cout<<"Your quotient is: "<<divide (num1,num2);
        break;
    }

}