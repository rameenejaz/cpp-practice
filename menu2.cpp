#include <iostream>
using namespace std;
int findIltFactorial(int number) {
    int factorial = 1;
    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }
    return factorial;
}

void printIltFactorial(int number) {
    int answer = findIltFactorial(number);
    cout << "The factorial of " << number << " is " << answer << '\n';
    cout<<number;
}

int findRecFactorialNum(int number) {
    if (number <= 1) 
        return 1;
    return number * findRecFactorial(number - 1);
}

void printRecFactorialNum(int number) {
    int answer = findRecFactorial(number);
    cout << "The factorial of " << number << " is " << answer << '\n';
    cout<<number;
}

int main() {
    cout << "Enter a number to find its factorial: ";
    int inputNumber;
    cin >> inputNumber;

    cout << "Press 1 to find factorial iteratively:\n";
    cout << "Press 2 to find factorial recursively:\n";
    cout << "Press 3 to print factorial found iteratively:\n";
    cout << "Press 4 to print factorial found recursively:\n";
    cout << "Enter an option (1, 2, 3, 4 or 0 to exit): ";
    int option;
    cin >> option;

    switch (option) {
        case 1:
            cout << "Factorial (iterative): " << findIltFactorial(inputNumber) << '\n';
            break;
        case 2:
            cout << "Factorial (recursive): " << findRecFactorial(inputNumber) << '\n';
            break;
        case 3:
            printIltFactorial(inputNumber);
            break;
        case 4:
            printRecFactorial(inputNumber);
            break;
        case 0:
            return 0;
        default:
            cout << "Invalid option selected!\n";
            break;
    }

    return 0;
}
