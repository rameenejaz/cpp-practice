#include <iostream>
using namespace std;
//counting the odd and even numbers in an array

//for odd
int oddNum(int arr[], int size) {
    int countOdd=0;
    for (int i=0; i<size; i++) {
        if (arr[i]%2==1) {
            countOdd++;
        }
    }
    return countOdd;
}
//for even
int evenNum(int arr[], int size) {
    int countEven=0;
    for (int i=0; i<size; i++) {
        if (arr[i]%2==0) {
            countEven++;
        }
    }
    return countEven;
}
int main() {
    int numbers[5]={1,2,3,4,5};
    int size=5;
    cout<<"There are "<<evenNum(numbers,size)<<" even numbers"<<'\n';
    cout<<"There are "<<oddNum(numbers,size)<<" odd numbers"<<'\n';
}