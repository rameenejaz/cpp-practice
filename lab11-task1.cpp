//taking n integer inputs from user and finding the sum the array
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
int sumArray(int arr[], int size) {
    int sum=0;
    for (int index=0; index<size; index++) {
        sum+=*(arr+index);
    }
    return sum;
}
int main () {
    int size;
    int sum=0;
    inputSize(size);
    int list[size];
    cout<<"Enter "<<size<<" elements: ";
    inputArray(list,size);
    cout<<"The sum of the elements in the array is: "<<sumArray(list,size)<<'\n';
}