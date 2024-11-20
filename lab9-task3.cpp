#include <iostream>
using namespace std;
//functions for lab 3
int const size=10;
void inputArray(int arr1[], int size){
    int index=0;
    cout<<"Array 1: ";
    for (index=0; index<size; index++) {
        cin>>arr1[index];
    }
}
void reversingArray(int arr1[], int arr2[], int size) {
    int index;
    int j;
    for (index=0, j=(size-1); index<size; index++, j--) {
        arr2[index]=arr1[j];
    }
}
void displayReverse(int arr1[],int size) {
    int index;
    for (index=0; index<size; index++) {
        cout<<arr1[index]<<" ";
    }
    cout<<'\n';
}
int main () {
    int const size=10;
    int arr1[10]={0};
    int arr2[10]={0};
    inputArray(arr1, size);
    cout<<"Array 2: ";
    reversingArray(arr1, arr2, size);
    displayReverse(arr2,size);

}

