#include <iostream>
using namespace std;
#include <cmath>
int main () {
    float a,b,c;
    float discriminant;
    float root1;
    float root2;
    float imaginary;
    cout<<"enter the value of a:";
    cin>>a;
    cout<<"enter the value of b:";
    cin>>b;
    cout<<"enter the value of c:";
    cin>>c;

    discriminant= (b*b)-4*a*c;
    root1= -b+ sqrt(discriminant)/(2*a);
    cout<<"The first root is"<<root1;
    root2= -b -sqrt(discriminant)/(2*a);
    cout<<"The second root is:"<<"root2";
    if (a==0) {
        cout<<"a cannot be zero";
    }
    if (discriminant<0) {
        cout<<"roots are imaginary";
    }
    else if (discriminant==0) {
    cout<<"there are two distinct roots";

    } 
    else {
        imaginary=sqrt(-discriminant)/2*a;
        cout<<"there is an imaginary root"<<imaginary;

    }

}