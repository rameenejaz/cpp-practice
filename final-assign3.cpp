#include <iostream>
using namespace std;
void inputArray(int arr[], int size) {
    cout<<"Enter 15 integers: ";
    for(int i=0; i<size; i++) {
        cin>>arr[i]; //taking input from user for array elements
    }
}
void evenNum(int arr[], int size) {
    cout<<"The even elements are: ";
    for (int i=0; i<size; i++) {
        if (arr[i]%2==0) {
            cout<<arr[i]<<" ";
        }
    }
    cout<<'\n';
}
int sumNum(int arr[], int size) {
    int add=0;
    for (int i=0; i<size; i++) {  
        add+=arr[i];
    }
    return add;
}
void average(int arr[], int size) {
    int sum=sumNum(arr, size); 
    cout<<"The average is: "<<static_cast<double>(sum)/size<<'\n';
}
void findMaxMin(int arr[], int size, int &maxValue, int &minValue) { //call by reference 
    maxValue=arr[0];
    minValue=arr[0];
    for (int i=0; i<size; i++) {
        if (maxValue<arr[i]){
            maxValue=arr[i];
        }
        if (minValue>arr[i]) {
            minValue=arr[i];
        }
    }
}
void reverse(int arr[], int size) {
    for (int i=(size-1); i>=0; i--) {
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}
int main () {
    int arr[15];
    int const size=15; //array size is 15, array has 15 elements
    int choice;
    do {
        cout<<"*** Assignment -  3 ***"<<'\n';
        cout<<"Press 1 to input elements into the array:"<<'\n';
        cout<<"Press 2 to print even elements"<<'\n';
        cout<<"Press 3 to calculate sum of elements"<<'\n';
        cout<<"Press 4 to calculate average of elements"<<'\n';
        cout<<"Press 5 to print maximum and minimum element"<<'\n';
        cout<<"Press 6 to print the array in reverse order"<<'\n';
        cout<<"Press 0 to exit"<<'\n';
        cin>>choice; //taking input from user to carry out a certain task

        switch(choice) {
        case 1: 
            inputArray(arr, size);
            break;
        case 2: 
            evenNum(arr,size);
            break;
        case 3: {
            int sum=sumNum(arr,15);
            cout<<"The sum of the 15 integers: "<<sum<<'\n';
            break;
        }
        case 4: 
            average(arr,size);
            break;
        case 5: {
        int maxVal;
        int minVal;
        findMaxMin(arr, size, maxVal, minVal);
        cout<<"The maximum value is: "<<maxVal<<" and the minimum value: "<<minVal<<'\n';
        break;
        }
        case 6: 
        reverse(arr,size);
        break;
        }
    } while (choice!=0);
}