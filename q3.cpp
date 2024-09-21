#include <iostream>
using namespace std;

int main() {
	float farenheit;
	float celcius;
	cout << "enter the temperature in farenheit:";
	cin >> farenheit;
	celcius = (farenheit - 32) * 0.56;
	cout << "Temperature in celcius:" << celcius;

	return 0;
}