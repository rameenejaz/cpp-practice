#include <iostream>
using namespace std;
float area(float radius) {
   float areaOfCircle=3.14159*radius*radius;
    return areaOfCircle;
}
int main () {
    float radius;
    cout<<"Enter the value of radius: ";
    cin>>radius;
    cout<<area(radius)<<'\n';
}