#include <iostream>
using namespace std;
float areaOfRectangle(float length, float width)
{
    float area = length * width;
    return area;
}
int main()
{
    float length = 0;
    float width = 0;
    float answer = 0;
    cout << "Enter a value for length: ";
    cin >> length;
    cout << "Enter a value for width: ";
    cin >> width;

    answer = areaOfRectangle(length, width);
    cout<<"The answer is: "<<answer<<'\n';
}