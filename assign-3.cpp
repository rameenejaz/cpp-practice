#include <iostream>
using namespace std;
void inputArray(int arr[],int size);
void evenNum(int arr[], int size);
int findSum(int arr[], int size);
double average(int arr[], int size);
int findMax(int arr[], int size);
void reverse(int arr[], int size);

int main () {
    int choice;
    int arr[15];
    
    do {
        cout<<"*** Assignment – 3 ***"<<'\n';
        cout<<"Press 1 to input elements into the array:"<<'\n';
        cout<<"Press 2 to print even elements"<<'\n';
        cout<<"Press 3 to calculate sum of elements"<<'\n';
        cout<<"Press 4 to calculate average of elements"<<'\n';
        cout<<"Press 5 to print maximum and minimum element"<<'\n';
        cout<<"Press 6 to print the array in reverse order"<<'\n';
        cout<<"Press 0 to exit"<<'\n';
        cin>>choice;

        switch(choice) {
            case 1: 
            inputArray(arr,15);
            break;
            case 2:
            evenNum(arr, 15);
            break;
            case 3:
            findSum(arr, 15);
            break;
            case 4:
            average(arr, 15);
            break;
            case 5: {
            int min, max;
            findMax(arr, 15);
            break;
            }
            case 6:
            reverse(arr, 15);
            case 0:
            cout<<"Program has been terminated!"<<'\n';
            break;
            default:
            cout<<"Invalid choice, please try again."<<'\n';
        }
    } while(choice!=0);
}
void inputArray(int arr[],int size) {
    cout<<"Enter 15 integers: ";
    for (int i=0; i<15; i++) {
        cin>>arr[i];
    }
}
void evenNum(int arr[], int size) {
    cout<<"The even elements are: ";
    for (int i=0; i<15; i++) {
        if (arr[i]%2==0) {
            cout<<arr[i]<<" ";
        }
    }
    cout<<'\n';
}
int findSum(int arr[], int size) {
    cout<<"The sum of the 15 integers is: ";
    int add=0;
    for (int i=0; i<15; i++) {
        add+=arr[i];
    }
    return add;
    cout<<'\n';
}
double average(int arr[], int size) {
    cout<<"The average of the 15 integers is: ";
    int sum=findSum(arr,size);
    return sum/size;
    cout<<'\n';
}
int findMax(int arr[], int size) {
    cout<<"The maximum and minimum value is: ";
    int maxValue=arr[0];
    int minValue=arr[0];
    for (int i=0; i<15; i++) {
        if (maxValue<arr[i]) {
            maxValue=arr[i];
        }
        if (minValue>arr[i]) {
            minValue=arr[i];
        }
    }
    return maxValue;
    return minValue;
    cout<<'\n';
}
void reverse(int arr[], int size) {
    cout<<"The reverse of the array is: ";
    for (int i=14; i>=0; i--) {
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}
