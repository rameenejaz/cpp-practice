#include <iostream>
using namespace std;

// Write a program that takes two numbers as input and prints the larger number. If both are equal, print they are both equal!
// Keep the variable names meaningful!

int main()
{
    int number1;
    int number2;
    cout << "enter number1" << '\n';
    cin >> number1;

    cout << "enter number2" << '\n';
    cin >> number2;

    if (number1 > number2)
    {
        cout << "number1 is bigger" <<'\n';
    }
    else if (number1 < number2)
    {
        cout << "number2 is bigger" <<'\n';
    }
    else{
            cout << "they are equal" <<'\n';
}
    return 0;
}
