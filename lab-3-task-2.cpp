#include <iostream>
using nam..espace std;
int main() {
    cout << "********************************************" << endl;
	cout << "***   PROGRAMMING FUNDAMENTALS-LAB  ***" << endl;
	cout << "***          LAB WEEK 3             ***" << endl;
	cout << "***         FA24-BSE-160            ***" << endl;
	cout << "***     RAMEEN MUZAMMIL EJAZ        ***" << endl;
	cout << "********************************************" << endl;
	double centimeters = 0;
	int totalInches = 0;
	int remainingInches = 0;
	int yards = 0;
	int inches = 0;
	cout << "Enter the length in centimeters: ";
	cin >> centimeters;
	totalInches = centimeters / 2.54;
	cout << "The length in inches: " << totalInches << '\n';
	inches = totalInches;
	cout << "The length in inches: " << remainingInches << '\n';
	yards = inches / 36;
	cout << "The length in yards: " << yards << '\n';
	remainingInches = inches % 36;
	int feet = remainingInches / 12;
	cout << "The length in feet is: " << feet << '\n';
	remainingInches %= 12;
	cout << "The length in inches: " << inches << '\n';

}