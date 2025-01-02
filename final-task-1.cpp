
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <climits>  // For INT_MAX
using namespace std;
void display() {
    cout << "******RAMEEN MUZAMMIL EJAZ******" << '\n';
    cout << "***SECTION A***" << '\n';
    cout << "***FA24-BSE-160***" << '\n';
}
int main() {
    display();
    int number = 0;
    int minNum = INT_MAX;  // Initialize to the largest possible value
    int countOdd = 0;
    int countEven = 0;
    int countZero = 0;
    int counter = 0;

    ifstream inFile("numbers.txt");
    if (!inFile) {
        cout << "File not opened" << '\n';
    }
    else {
        cout << "File opened successfully!" << '\n';
        while (inFile >> number) {  
            countOdd = 0;
            countEven = 0;
            countZero = 0;
            minNum = INT_MAX;  
            while (number != -99) {  
                if (number < minNum) {
                    minNum = number;
                }
                if (number == 0) {
                    countZero++;
                }
                else if (number % 2 == 0) {
                    countEven++;
                }
                else if (number % 2 != 0) {
                    countOdd++;
                }
                inFile >> number;  
            }
            counter++;  
            cout << "Line " << counter << ": " << "Minimum value = " << minNum << ", "<< "Odds = " << countOdd << ", "<< "Zeroes = " << countZero << ", "<< "Evens = " << countEven << '\n';
        }
    }
    inFile.close();
    cout << "File closed successfully!" << '\n';
    return 0;
}