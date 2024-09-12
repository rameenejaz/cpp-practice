#include <iostream>
using namespace std;
int main() {
	int number_1;
	int number_2;
	int number_3;

	cout << "Enter number_1:";
	cin >> number_1;
	cout << "Enter number_2:";
	cin >> number_2;
	cout << "Enter number_3:";
	cin >> number_3;
	cout << "The entered numbers are:" << number_1 << "," << number_2 << "," << number_3 << '\n';
	if (number_1 > number_2) {
		int temp = number_1;
		number_1 = number_2;
		number_2 = temp;

	}
	else if (number_1>number_3) {
		int temp = number_1;
		number_1 = number_3;
		number_3 = temp;
	}
	else if (number_2 > number_3) {
		int temp = number_2;
		number_2 = number_3;
		number_3 = temp;

	}
	cout << "The ascending order is:" << number_1 << "," << number_2 << "," << number_3;
	return 0;

}