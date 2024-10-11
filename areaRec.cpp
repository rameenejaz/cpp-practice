#include <iostream>
using namespace std;
int areaOfRectangle(float length, float width ) {
    float area = (length * width);
    return area;
}
int main () {
    float length;
    float width;
    cout<<"Enter a value for length: ";
    cin>>length;
    cout<<'\n';
    cout<<"Enter a value for width: ";
    cin>>width;
    cout<<'\n';
    float result=areaOfRectangle(length,width);
    cout<<"The area of rectangle is: "<<result;
}