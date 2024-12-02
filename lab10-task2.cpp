#include <iostream>
using namespace std;
const int numOfRows=3;
const int numOfCols=4;
void input (int matrix[][numOfCols], int numOfRows) {
    cout<<"Enter 12 values into the array:";
    for (int row=0; row<numOfRows; row++) {
        for (int col=0; col<numOfCols; col++) {
            cin>>matrix[row][col];
        }
    }
}

int primeNum(int matrix[][numOfCols], int numOfRows) {
    int countPrime=0; //counting the number of orime numbers
    int maxPrime_col=0; //the maximum prime numbers in this column
    int primeColIndex=-1; //the index which holds the max prime numbers
    int num=0;
    for (int col=0; col<numOfCols; col++) {
        for (int row=0; row<<numOfRows; row++) {
            if ((matrix[row][col]%col)!=0) {
                num=matrix[row][col];
            }
        }
        if (num>maxPrime_col) {
            maxPrime_col=num;
            primeColIndex=col;
        }
    }
        return (primeColIndex+1);

}
int main () {
    int list[numOfRows][numOfCols];
    input(list,numOfRows);
    cout<<"The column index with max prime numbers is: ";
    primeNum(list,numOfRows);

}


// #include <iostream>
// using namespace std;

// const int numOfRows = 3;
// const int numOfCols = 4;

// // Function to input the matrix
// void input(int matrix[][numOfCols], int numOfRows) {
//     cout << "Enter 12 values into the array:" << endl;
//     for (int row = 0; row < numOfRows; row++) {
//         for (int col = 0; col < numOfCols; col++) {
//             cin >> matrix[row][col];
//         }
//     }
// }

// // Function to check if a number is prime
// bool isPrime(int num) {
//     if (num <= 1) 
//      return false; // 1 and numbers <= 0 are not prime
//      for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// // Function to find the column with the maximum number of prime numbers
// int primeNum(int matrix[][numOfCols], int numOfRows) {
//     int maxPrimeCount = 0;  // Maximum number of primes in a column
//     int primeColIndex = -1; // Index of the column with the most primes

//     for (int col = 0; col < numOfCols; col++) {
//         int primeCount = 0; // Count of primes in the current column

//         for (int row = 0; row < numOfRows; row++) {
//             if (isPrime(matrix[row][col])) {
//                 primeCount++;
//             }
//         }

//         // Update the column with the maximum prime count
//         if (primeCount > maxPrimeCount) {
//             maxPrimeCount = primeCount;
//             primeColIndex = col;
//         }
//     }

//     return primeColIndex + 1; // Return 1-based column index
// }

// int main() {
//     int list[numOfRows][numOfCols];

//     // Input the matrix
//     input(list, numOfRows);

//     // Find the column with the most primes and display it
//     int colIndex = primeNum(list, numOfRows);
//     if (colIndex > 0) {
//         cout << "The column index with the maximum prime numbers is: " << colIndex << endl;
//     } else {
//         cout << "No column contains any prime numbers." << endl;
//     }

//     return 0;
// }
