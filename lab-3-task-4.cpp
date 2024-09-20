#include <iostream>
using namespace std;
int main() {
    cout << "********************************************" << endl;
	cout << "***   PROGRAMMING FUNDAMENTALS-LAB  ***" << endl;
	cout << "***          LAB WEEK 3             ***" << endl;
	cout << "***         FA24-BSE-160            ***" << endl;
	cout << "***     RAMEEN MUZAMMIL EJAZ        ***" << endl;
	cout << "********************************************" << endl;
	int number = 0;
	int sum = 0;
	int digit = 0;
	int hundreds = 0;
	int tens = 0;
	int ones = 0;
	cout << "Enter a number between 0 and 1000: ";
	cin >> number;
	hundreds = number / 100;
	tens = (number / 10) % 10;
	ones = number % 10;
	sum = hundreds + tens + ones;
	cout << "The sum of the digits: " << sum << '\n';
}