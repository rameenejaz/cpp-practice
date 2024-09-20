#include <iostream>
using namespace std;
int main() {
    cout << "********************************************" << endl;
	cout << "***   PROGRAMMING FUNDAMENTALS-LAB  ***" << endl;
	cout << "***          LAB WEEK 3             ***" << endl;
	cout << "***         FA24-BSE-160            ***" << endl;
	cout << "***     RAMEEN MUZAMMIL EJAZ        ***" << endl;
	cout << "********************************************" << endl;
	int hours = 0;
	int minutes = 0;
	int totalSeconds = 0;
	int remainingSeconds = 0;
	int seconds = 0;
	cout << "Enter the elasped time in hours: ";
	cin >> hours;
	cout << "Enter the elasped time in minutes: ";
	cin >> minutes;
	cout << "Enter the elasped time in seconds: ";
	cin >> seconds;
	cout << hours << ":" << minutes << ":" << seconds << '\n';
	totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
	cout << "The total seconds are: " << totalSeconds;

}