#include <iostream>
using namespace std;
#include <string>
int multiply (int a, int b) {
    int answer = a*b;
    return answer;
}
int main () {
    int a=0;
    int b=0;
    cout<<"Enter a value for a: ";
    cin>>a;
    cout<<"Enter a value for b: ";
    cin>>b;
    cout<<"The answer is: "<<multiply(a,b)<<'\n';
}

