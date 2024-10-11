#include <iostream>
using namespace std;
int subtract(int a, int b) {
    int minus = (a-b);
    return minus;
}
int main () {
    int a;
    int b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    int result=subtract(a,b);
    cout<<"The subtraction result is: "<<result;
}