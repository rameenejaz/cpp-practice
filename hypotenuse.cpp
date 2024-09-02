#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float base = 0;
    float height = 0;
    float hypotenuse = 0;

    cout << "Enter the value of base:";
    cin >> base;
    cout << "Enter the value of height:";
    cin >> height;

    hypotenuse = sqrt((base * base) + (height * height));
    cout << "hypotenuse=" << hypotenuse<<'\n';
}