#include <iostream>
using namespace std;
//to count odd and even numbers
int evenNum(int arr[], int size) {
    int countEven=0;
    for (int i=0; i<size; i++) {
        if (arr[i]%2==0) {
            countEven++;
        }
    }
    return countEven;
}
int oddNum(int arr[], int size) {
    int countOdd=0;
    for (int i=0; i<size; i++) {
        if (arr[i]%2==1) {
            countOdd++;
        }
    }
    return countOdd;
}
int main () {
    int numbers[5]={1,2,3,4,5};
    int size=5;
    int even=evenNum(numbers,size);
    cout<<"There are "<<even<<" even numbers"<<'\n';
    int odd=oddNum(numbers,size);
    cout<<"There are "<<odd<<" odd numbers"<<'\n';
}
