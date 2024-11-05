#include <iostream>
#include <cmath>
using namespace std;
double hypotenuse(double side1, double side2) {
    double result= sqrt((side1*side1)+(side2*side2));
    return result;
}
int main () {
    double s1, s2;
    cout<<"Enter the value of side 1: ";
    cin>>s1;
    cout<<"Enter the value of side 2: ";
    cin>>s2;
    cout<<"The hypotenuse of a triangle is: ";
    double value=hypotenuse(s1,s2);
    cout<<value;
}
