#include <iostream>
using namespace std;
//double values in an array
void doubleArray(int arr[], int size) {
    for (int i=0; i<size; i++) {
        arr[i]*=2;
    }
}
int main () {
    int numbers[5]={1,2,3,4,5};
    int size=5;
    cout<<"Before doubling: ";
    for (int i=0; i<size; i++) {
        cout<<numbers[i]<<" ";
    }
    cout<<'\n';

    cout<<"After doubling: ";
    doubleArray(numbers,size);
    for (int i=0; i<size; i++) {
        cout<<numbers[i]<<" ";
    }
    cout<<'\n';
}