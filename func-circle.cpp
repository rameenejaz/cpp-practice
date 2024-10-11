#include <iostream>
using namespace std;
float area(float radius) {
    float areaCircle=3.1415*radius*radius;
    return areaCircle;
}
int main () {
    float radius=0;
    cout<<"Enter the radius: ";
    cin>>radius;
    cout<<"Enter area of circle is:  "<<area(radius)<<'\n';

}