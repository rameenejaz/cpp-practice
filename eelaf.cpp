#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0, count = 0, outOfRangeCount = 0;
    int largest = -1, smallest = 10000;
    while(num!==-999){
    cout << "Enter a positive number (-999 to quit): ";
    cin >> num;

    // Loop until user enters -999
    
        if (num < 50 || num > 550) {
            // If the number is out of range, count it as out-of-range
            cout << "Invalid! Enter a positive number (-999 to quit): ";
            cin>>num;
            outOfRangeCount++;
        } else {
            // If the number is valid, process it
            sum += num;
            count++;

            // Check for largest and smallest values
            if (num > largest) largest = num;
            if (num < smallest) smallest = num;
        }

        // Read the next number
        cin >> num;
    }

    // After exiting the loop, check if there were any valid in-range numbers
    if (count > 0) {
        cout << "Sum is: " << sum << endl;
        cout << "Average is: " << (sum / (double)count) << endl;
        cout << "There are " << outOfRangeCount << " out of range values." << endl;
        cout << "Largest value is: " << largest << endl;
        cout << "Smallest value is: " << smallest << endl;
    } else {
        cout << "No valid numbers were entered." << endl;
    }

    return 0;
}
