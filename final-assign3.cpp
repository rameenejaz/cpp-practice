#include <iostream>
using namespace std;
void inputArray(int arr[], int size) { //function to input 15 integers into the array
    cout<<"Enter 15 integers: ";
    for(int i=0; i<size; i++) {
        cin>>arr[i]; //taking input from user for array elements
    }
}
void evenNum(int arr[], int size) { // Function to print even elements from the array
    cout<<"The even elements are: ";
    for (int i=0; i<size; i++) {
        if (arr[i]%2==0) { //checking if the number inputted is evn
            cout<<arr[i]<<" ";  //printing the even number
        }
    }
    cout<<'\n';
}
int sumNum(int arr[], int size) {  // Function to calculate the sum of all elements in the array
    int add=0; // Initialize sum variable
    for (int i=0; i<size; i++) {  
        add+=arr[i]; // Add each element to sum
    }
    return add; // Return the total sum
}
void average(int arr[], int size) { // Function to calculate and print the average of the array elements
    int sum=sumNum(arr, size);  // Calculate the sum of elements
    cout<<"The average is: "<<static_cast<double>(sum)/size<<'\n'; // Calculate and print average
}
void findMaxMin(int arr[], int size, int &maxValue, int &minValue) { // Function to find the maximum and minimum values in the array 
    maxValue=arr[0]; // Initialize maxValue with the first element
    minValue=arr[0]; // Initialize minValue with the first element
    for (int i=0; i<size; i++) {
        if (maxValue<arr[i]){ // Update maxValue if a larger element is found
            maxValue=arr[i];
        }
        if (minValue>arr[i]) { // Update minValue if a smaller element is found
            minValue=arr[i];
        }
    }
}
void reverse(int arr[], int size) { // Function to print the elements of the array in reverse order
    for (int i=(size-1); i>=0; i--) {
        cout<<arr[i]<<" "; // Print elements from last to first
    }
    cout<<'\n';
}
int main () {
    int arr[15];
    int const size=15; //array size is 15, array has 15 elements
    int choice;  // Variable to store user's menu choice
    cout<<"Enter 1 to start: ";
    cin>>choice;
    while (choice!=1) { // Check if the user entered '1', if not ask again until valid input
        cout<<"Invalid input, please enter 1 to begin: ";
        cin>>choice;
    }
    do {
        //Printing the menu options
        cout<<"*** Assignment -  3 ***"<<'\n';
        cout<<"Press 1 to input elements into the array:"<<'\n';
        cout<<"Press 2 to print even elements"<<'\n';
        cout<<"Press 3 to calculate sum of elements"<<'\n';
        cout<<"Press 4 to calculate average of elements"<<'\n';
        cout<<"Press 5 to print maximum and minimum element"<<'\n';
        cout<<"Press 6 to print the array in reverse order"<<'\n';
        cout<<"Press 0 to exit"<<'\n';
        cin>>choice; //taking input from user to carry out a menu option

        while (choice<0 || choice>6) { // Input validation for menu choice, ensuring it's between 0 and 6
        cout << "Invalid choice. Please enter a valid choice (0-6): ";
        cin >> choice;
        }
        switch(choice) {
        case 1: 
            inputArray(arr, size);  // Call the inputArray function to input 15 elements into the array
            break;
        case 2: 
            evenNum(arr,size); // Call the evenNum function to print even elements
            break;
        case 3: {
            int sum=sumNum(arr,15);  // Calculate and print the sum of the array elements
            cout<<"The sum of the 15 integers: "<<sum<<'\n';
            break;
        }
        case 4: 
            average(arr,size); // Call the average function to calculate and print the average
            break;
        case 5: {
        // Declare variables for max and min values
        int maxVal;
        int minVal;
        findMaxMin(arr, size, maxVal, minVal); // Call the findMaxMin function to find max and min values
        cout<<"The maximum value is: "<<maxVal<<" and the minimum value: "<<minVal<<'\n';
        break;
        }
        case 6: 
        reverse(arr,size); // Call the reverse function to print the array in reverse order
        break;
        }
    } while (choice!=0); //program terminates when the user enters 0
}