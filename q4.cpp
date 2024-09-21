#include <iostream>
using namespace std;
int main() {
	float radius;
	float area;

	cout << "Enter the value of radius:";
	cin >> radius;
	area = 3.142 * (radius * radius);
	cout << "Area of circle=" << area;

	return 0;
}