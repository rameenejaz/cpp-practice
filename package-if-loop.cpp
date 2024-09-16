#include <iostream>
using namespace std;
int main() {
	char package;
	int minutes;
	float totalAmount = 0;

	cout << "Enter the package you want to purchase (A,B or C):";
	cin >> package;
	cout << "Enter the minutes you have used:";
	cin >> minutes;

	if (package == 'A' || package == 'a') {
		cout << "You have 450 mins";
		totalAmount = 40;
	}
		if (minutes > 450) {
			totalAmount += (minutes - 450) * 1;
			cout << "total amount is:" << totalAmount << '\n';
		}
		else if (package == 'B' || package == 'B') {
			cout << "You have 900 mins";
			totalAmount = 60;
		}
		if (minutes > 900) {
			totalAmount += (minutes - 900) * 2;
			cout << "total amount is:" << totalAmount << '\n';
		}
		if (package == 'C' || package == 'c') {
			cout << "You have unlimited mins";
			cout<<"Total amount is 70"<<'\n';

		}
		else {
			cout << "Not a valid package" << '\n';
		}
	}