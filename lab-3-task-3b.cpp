#include <iostream>
using namespace std;
int main() {
    cout << "********************************************" << endl;
	cout << "***   PROGRAMMING FUNDAMENTALS-LAB  ***" << endl;
	cout << "***          LAB WEEK 3             ***" << endl;
	cout << "***         FA24-BSE-160            ***" << endl;
	cout << "***     RAMEEN MUZAMMIL EJAZ        ***" << endl;
	cout << "********************************************" << endl;
	int totalSeconds;
	int hours;
	int minutes;
	int seconds;

	cout << "Enter the total seconds: ";
	cin >> totalSeconds;
	hours = totalSeconds / 3600;
	totalSeconds %= 3600;
	minutes = totalSeconds / 60;
	seconds = totalSeconds % 60;
	cout << totalSeconds << "seconds is equal to " << hours << ":" << minutes << ":" << seconds;
}