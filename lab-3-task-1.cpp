#include <iostream>
using namespace std;
int main() {
	cout << "********************************************" << endl;
	cout << "***   PROGRAMMING FUNDAMENTALS-LAB  ***" << endl;
	cout << "***          LAB WEEK 3             ***" << endl;
	cout << "***         FA24-BSE-160            ***" << endl;
	cout << "***     RAMEEN MUZAMMIL EJAZ        ***" << endl;
	cout << "********************************************" << endl;
	double amount = 0;
	int dollars = 0;
	int totalCents=0;
	int remainingCents = 0;
	int quarters = 0;
	int dimes = 0;
	int nickels = 0;
	int pennies = 0;
	
	cout << "Enter the amount: ";
	cin >> amount;
	totalCents = amount * 100;
	cout << "The amount in cents is: " << totalCents << '\n';
	dollars = totalCents / 100;
	remainingCents = totalCents % 100;
	cout << "The amount in dollars is " << dollars << '\n';
	quarters = remainingCents / 25;
	remainingCents %= 25;
	cout << "The amount in quarters: " << quarters << '\n';
	dimes = remainingCents / 10;
	remainingCents %= 10;
	cout << "The amount in dimes: " << dimes << '\n';
	nickels = remainingCents / 5;
	remainingCents %= 5;
	cout << "The amount in nickels: " << nickels << '\n';
	pennies = remainingCents;
	cout << "The amount in pennies: " << pennies << '\n';


}