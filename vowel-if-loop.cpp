#include <iostream>
using namespace std;
int main() {
	char alphabet;
	char A;
	char E;
	char I;
	char O;
	char U;
	cout << "Enter an alphabet: ";
	cin >> alphabet;	cout << ((alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet =='U') ? "It is a vowel\n" : "It is not a vowel\n");
	return 0;
}