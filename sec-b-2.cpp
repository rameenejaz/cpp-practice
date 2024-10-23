#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int sum = 0;
    float average = 0;
    int const SENTINEL = -999;
    int steps = 0;  // total inputs (including out of range)
    int count = 0;  // total inputs in range
    int largest = 0;
    int smallest = 0;
    bool firstValid = true;  // For handling largest and smallest

    while (true) {
        // Input the number
        cout << "Enter numbers between 50 and 550 or (-999) to exit: ";
        cin >> number;

        // Check for the sentinel value to stop
        if (number == SENTINEL) {
            break;
        }

        steps++;  // Count all inputs (including out-of-range)

        // Check if the number is in the valid range (50 to 500)
        if (number >= 50 && number <= 500) {
            count++;  // Count valid in-range inputs
            sum += number;  // Add valid numbers to the sum

            // Handle largest and smallest numbers
            if (firstValid) {
                largest = smallest = number;
                firstValid = false;
            }
            if (number > largest) {
                largest = number;
            }
            if (number < smallest) {
                smallest = number;
            }
        }
    }

    // Calculate the average only if there are valid inputs
    if (count > 0) {
        average = static_cast<float>(sum) / count;  // Correct floating-point division
    }

    // Display results
    cout << "Total inputs: " << steps << '\n';
    cout << "Total inputs in range: " << count << '\n';
    cout << "Sum: " << sum << '\n';
    cout << "Average: " << average << '\n';
    if (count > 0) {
        cout << "Largest number: " << largest << '\n';
        cout << "Smallest number: " << smallest << '\n';
    }

    return 0;
}