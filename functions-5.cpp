#include <iostream>
using namespace std;
float area(float radius)
{
    float areaOfCircle = 3.14159 * radius * radius;
    cout<<"The area of circle is: "<<areaOfCircle<<'\n';
    return areaOfCircle;
}
int main()
{
    float radius = 0;
    cout << "Enter the value of radius: ";
    cin >> radius;
    area(radius)
}