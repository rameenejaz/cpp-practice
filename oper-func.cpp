#include <iostream>
using namespace std;
int add (int num1,int num2) {
    int sum=num1+num2;
    return sum;
}
int subtract (int num1, int num2) {
    int minus=num1-num2;
    return minus;
}
int multiply (int num1, int num2) {
    int product=(num1*num2);
    return product;
}
float divide (float num1, float num2) {
    float quotient=(num1/num2);
    return quotient;
}
int main () {
    int num1;
    int num2;
    int mathFunction;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter 1 for addition, 2 for subtraaction, 3 for multiplication and 4 for division: ";
    cin>>mathFunction;

    if (mathFunction==1) {
        cout<<"The sum is "<<add(num1,num2);
    }
    else if (mathFunction==2) {
        cout<<"The subtraction answer is "<<subtract(num1,num2);
    }
    else if (mathFunction==3) {
        cout<<"The product is: "<<multiply(num1,num2);
    }
    else if (mathFunction==4){
        cout<<"The quotient is: "<<divide(num1,num2);
    }
    }

    
    

