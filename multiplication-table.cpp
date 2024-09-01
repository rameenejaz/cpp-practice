// Question: Write a program that prints the multiplication table for a number provided by the user. Use a for loop.

#include <iostream>
using namespace std;
int main()
{
    int product = 0;
    int number; // write the number's table
    int output;

    cout << "Enter a number n:" <<'\n';
    cin >> number;

    for (int i = 1; i <= 10; i++)
    {
        product = number * i;
        cout << number << "*" << i << " = "<< product <<'\n';
    }
}