#include <iostream>
using namespace std;
double maxNum(double num1, double num2) {
    if (num1>num2) {
        return num1;
    }
    else {
        return num2;
    }
}
int main () {
    double a=5;
    double b=7;
    double c=maxNum(a,b);
    cout<<"The maximum number is: "<<c<<'\n'; 
}