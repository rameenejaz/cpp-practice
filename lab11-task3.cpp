//taking input from user and displaying the array in reversing order
#include <iostream>
using namespace std;
void inputSize(int &size) {
cout<<"Enter the n number of elements you want to enter: ";
cin>>size;
do {
    if(size<=0) {
        cout<<"Array size must be greater than zero, enter size again: ";
        cin>>size;
    }
    }while(size<=0);
}
void inputArray(int arr[],int size) {
    for (int index=0; index<size; index++) {
        cin>>*(arr+index);
    }
}
void reverse(int arr[], int size) {
    for (int index=(size-1); index>=0; index--) {
        cout<<*(arr+index)<<" ";
    }
}
int main () {
     int size;
    inputSize(size);
    int list[size];
    cout<<"Enter "<<size<<" elements: ";
    inputArray(list,size);
    cout<<"The reversed array is: ";
    reverse(list,size);
}