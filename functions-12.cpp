#include <iostream>
using namespace std;
int max (int num1, int num2) {
    int result;
    if (num1>=num2) {
    result=num1;
    }
    if (num1<=num2) {
        result=num2;
    }
    return result;
}
int main () {
    int a=5;
    int b=6;
    cout<<"The max value is: "<<max(a,b);
}