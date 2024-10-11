#include <iostream>
using namespace std;
float averageNum(int a, int b, int c) {
    float average=(a+b+c)/3;
    return average;
}
int main () {
    int a;
    int b;
    int c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
    int result=averageNum(a,b,c);
    cout<<"The average is "<<result;
}